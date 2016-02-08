PFont font; //<>// //<>//
int numOfObjects = 10;
int yellow = color(245, 250, 15);
int red = color(255,0,0);
Face[] objects = new Face[numOfObjects];

class Face {

  int x;
  int y;
  int stepX;
  int stepY;
  int rotation;
  int rotationStep;
  int col;
  float angryNess = 0;

  Face() {
    reset();
  }

  void reset() {
    x = (int) random(1, width);
    y = (int) random(1, height);
    stepX = (int) random(0, 10) - 5;
    stepY = (int) random(0, 10) - 5;
    rotationStep = (int) random(0, 10) - 5;
    col = (int) random(0, 200);
  }

  void draw() {

    pushMatrix();

    translate(x, y);
    textFont(font);
    textAlign(CENTER, CENTER);
    stroke(0);
    
    if (angryNess <= 0) {
      fill(yellow);
      angryNess = 0;
    } else 
      fill(lerpColor(yellow, red, angryNess));
      
    rotate(radians(rotation));
    ellipse(0, 0, 30, 25);
    fill(0);
    noStroke();
    ellipse(-5, -5, 4, 4);
    ellipse(5, -5, 4, 4);
    noFill();
    stroke(0);
    arc(0,0,15,10 - (10 * angryNess),radians(0), radians(180));

    x+=stepX;
    y+=stepY;
    rotation+=rotationStep;

    popMatrix();
    if (checkWallCollision() || checkObjectCollision()) {
      rotationStep *= -1;
      // col = (int) random(0, 200);
      angryNess =1;
    } else {
     angryNess -= .01; 
    }

    checkMouseClick();
  }

  boolean checkWallCollision() {
    boolean collision = false;
    if (x<10 || x>width-10) { 
      stepX *= -1;
      collision = true;
    }
    if (y<10 || y > height-10) {
      stepY *= -1;
      collision = true;
    }

    return collision;
  }

  boolean checkObjectCollision() {
    for (int i=0; i<numOfObjects; i++) {
      if (objects[i] == this) continue;

      if (objects[i].collidesWith(this)) return true;
    }
    return false;
  }

  boolean collidesWith(Face a) {
    if (dist(a.x, a.y, x, y) < 20) {
      changeDirection();
      a.changeDirection();
      return true;
    } 

    return false;
  }

  void changeDirection() {
    stepX *= -1;
    stepY *= -1;
  }

  void checkMouseClick() {
    if (mousePressed) {
      if (dist(x, y, mouseX, mouseY) < 40) {
        x = mouseX;
        y = mouseY;
      }
    }
  }
}


void setup() {
  size(800, 800);

  font = createFont("Arial", 40, true);

  for (int i=0; i<numOfObjects; i++) objects[i] = new Face();
}

void draw() {
  background(255);

  for (int i=0; i<numOfObjects; i++) {
    objects[i].draw();
  }
}
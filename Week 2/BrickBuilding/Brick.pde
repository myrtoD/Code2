class Brick{
  float size;
  float xPos, yPos;
  float xSpeed, ySpeed;
  color redish;
  
  Brick(){
    size = 8;
    xPos = width/3;
    yPos = height/3;
    xSpeed = random(-6, 6);
    ySpeed = random(-6, 6);
    redish = color(255,80,30);
  }
 
  void giveBirth(){
    xPos = mouseX;
    yPos = mouseY;

  }
 
  void update(){
    strokeWeight(2);
    stroke(0);
    fill(redish);
    rect(xPos, yPos, size*2, size*2);
    fill(redish);
    rect(xPos -(size), yPos-(size), size, size);
    fill(redish);
    rect(xPos-(size), yPos-(size+size), size*5, size*5);
    
    xPos+=xSpeed;
    yPos+=ySpeed;
    
  }
}
float x1, x2, y1, y2;
float angle1, angle2;
float scalar = 70;

int maxWaves = 5;
Wave[] waves = new Wave[maxWaves];

void setup() {
  size(640, 360);
  noStroke();
  int a = 128;
  for (int i=0; i<maxWaves; i++) {
    int col = color(0,0,random(100,255), 128 + ((255 - 128) / a) );
    waves[i] = new Wave((int)random(20,30), col);
    
  }
}

void draw() {
  background(0);

  for (int i=0; i < maxWaves; i++) {
    waves[i].draw();
  }
}

class Wave {
  int breaks;
  WaveBreak[] waveBreaks;
  int col;
  
  public Wave(int b, int c) {
    col  =c;
    breaks = b;
    waveBreaks = new WaveBreak[breaks];
    float step = (float)(width) / (float)(breaks-1);
    float x = 0;
    float ang = random(0, 1);
    float aS = random(0, 5) - 2.5;
    for (int i=0; i < breaks; i++) {
      waveBreaks[i] = new WaveBreak(x, ang, aS);
      x += step;
      ang += aS;
    }
    
    
    
  }

  public void draw() {
    
    fill(col);
    stroke(color(255,255,255));
    strokeJoin(ROUND);
    beginShape();
    
    vertex(0,height);
    
    for (int i=0; i < breaks; i++) {
      waveBreaks[i].calc();
    }
    
    vertex(width, height);
    
    endShape(CLOSE);    
  }
}

class WaveBreak {
  float ang;
  float span;
  float y;
  float offsetY;
  float step;
  int breaks;
  float posX;
  public WaveBreak(float x, float a, float s) {
    posX = x;
    span = random(10, 20);
    offsetY = random(60, 70);
    ang = a;
    step = s;
  }

  public void drawTo(WaveBreak other) {
    stroke(color(255, 255, 255));
    line(other.posX, other.y, posX, y);
  }

  public void calc() {
    y = height - offsetY + (span * sin(radians(ang)));
    ang += step;
    vertex(posX, y);
  }
}
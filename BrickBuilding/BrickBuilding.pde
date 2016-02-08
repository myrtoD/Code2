Brick base;
Brick support;

void setup(){
  size (800, 800);
  
  base= new Brick();
  support = new Brick();
}

void draw(){
  if(mousePressed){
    base.giveBirth();
    support.giveBirth();
  }
  
  base.update();
  support.update();
  
}
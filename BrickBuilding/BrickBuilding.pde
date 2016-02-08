Smile friend;
Smile bestFriend;

void setup(){
  size (800, 800);
  
  friend= new Smile();
  bestFriend = new Smile();
}

void draw(){
  if(mousePressed){
    friend.giveBirth();
    bestFriend.giveBirth();
  }
  
  friend.update();
  bestFriend.update();
  
}
void setup(){
  size(400,400);
  background(#C0EBD7);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1') stroke(#F98B74);
  if(key=='2') stroke(#27A76A);
}

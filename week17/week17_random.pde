void setup(){
  size(400,400);
}
int result=0;
void draw(){
  background(#C0EBD7);
  if( dist(mouseX,mouseY,300,300)<50) fill(#27A76A);
  else fill(#F98D74);
  ellipse(300,300,100,100);
  fill(0);
  textSize(30);
  text("Press Me",245,300);
  if(mousePressed) result = int(random(10));
  text(result,100,200);
}

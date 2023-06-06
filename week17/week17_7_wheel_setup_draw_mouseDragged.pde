void setup(){
  size(400,400);
}
void draw(){
  background(#c0ebd7);
  for (int i=0;i<24;i++){
    float a=radians(360/24);
    if(i==0) fill(#297727);
    else if(i%3==0) fill(#c0edb7);
    else if(i%3==1) fill(#f98d74);
    else fill(#86c584);
    arc(200,200,300,300,d+a*i,d+a*(i+1),PIE);
  }
}
float d=0;
void mouseDragged(){
  d=mouseX;
}

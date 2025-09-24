//week03-8
import processing .serial.*;
Serial myPort;
void setup(){
    size(400,400);
    myPort = new Serial(this, "COM7",9600);
}
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b');
  if(mouseButton==RIGHT) myPort.write(' ');
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}

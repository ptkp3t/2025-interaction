week10_7_arduino_serial_joystick_x_y_to_processing
// 修改自 week10_5_arduino_serial_joystick_to_processing
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() {
  delay(30);
  int x = analogread(A2);
  int y = analogread(A3);
  Serial.write(x/4);
  Serial.write(y/4);
  if(x>900) tone(8,784,100);
  if(x<100) tone(8,523,100);
  if(y>900) tone(8,659,100);
  if(y<100) tone(8,500,100);
}

week10_7_processing_serial_joystick_x_y
import processing.serial.*;
Serial myPort;
void setup(){
  size(512,512);
  myPort = new Serial(this,"COM5",9600);
}
int x = 128,y = 128, now;
void draw(){
  background(#FFFFA0);
  ellipse(x*2,y*2,8,8);
  if( myPort.available() > 0 ){
    x = myPort.read();
    y = myPort.read();
  }
}

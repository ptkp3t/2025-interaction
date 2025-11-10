week10_5_arduino_serial_monitor_joystick_to_processing
// 修改自 week10_4_arduino_serial_monitor_joystick_Serial_println
// 不使用Serial.println() 要改用 serial.write()
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() {
  delay(100);
  int now = analogRead(A3);
  Serial.write(now);
  if(now>200) tone(8,784,100);
  if(now<50) tone(8,523,100);
}

week10_5_processing_serial_joystick
import processing.serial.*;
Serial myPort;
void setup(){
  size(512,200);
  myPort = new Serial(this,"COM5",9600);
}
int now = 255;
void draw(){
  background(now);
  ellipse(now,100,20,20);
  if( myPort.available()>0){
    now = myPort.read();
  }
}
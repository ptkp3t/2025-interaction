week10_4_arduino_serial_monitor_joystick_Serial_println
// 修改自 week10_3_arduino_analogRead_A3
// 把 joystick 的 Y 的線，經由麵包板幫忙,按到 MakerUNO 另一邊的A3
// (不能接其他的,因為要接有小蟲符號的,代表 analog訊號)
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() {
  delay(100);
  int now = analogRead(A3);
  Serial.println(now);
  if(now>800){
    tone(8,523,100);
    delay(100);
    tone(8,784,100);
    delay(200);    
  }
  else if(now<200){
    tone(8,784,100);
    delay(100);
    tone(8,523,100);
    delay(200);        
  }
}
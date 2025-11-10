week10_2_arduino_pin2_switch_tone_8_523_784_delay100
void setup() {
  pinMode(2,INPUT_PULLUP);
  // pin2 變成按鈕，可以HIGH高(沒按) 可以LOW低(按)
}

void loop() {
  if(digitalRead(2)==LOW){
    tone(8,523,100); // 發出 do
    delay(100);
    tone(8,784,100); // 發出 So
    delay(100);
  }

}
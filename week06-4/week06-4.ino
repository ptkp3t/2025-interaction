//week06-4
void setup() {
  // put your setup code here, to run once:
  pinmode(8,output);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8,780,100);
  delay(300);
  tone(8,320,600);
  delay(300);
}

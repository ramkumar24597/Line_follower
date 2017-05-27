

void setup() {
  
  // put your setup code here, to run once:

 digitalWrite(8,HIGH);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int r = digitalRead(2);
Serial.println(r);
delay(500);
}

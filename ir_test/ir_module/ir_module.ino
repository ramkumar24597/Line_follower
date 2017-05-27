void setup()
{
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int a = digitalRead(4);
  int b = digitalRead(5);
  int c = digitalRead(6);
 Serial.println();
Serial.print("left :");
Serial.print(a);
Serial.print(" center :");
Serial.print(b);
Serial.print(" right : ");
Serial.print(c);
delay(500);
}


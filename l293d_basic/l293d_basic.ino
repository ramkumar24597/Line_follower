int motor1 = 10;
int motor2 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motor1,HIGH);
digitalWrite(motor2,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(2,HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:

forward();
delay(5000);
backward();
delay(5000);
}
void forward()
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
}
void backward()
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
}  

int ldrsensor =A0;
int led = 5;
int val;

void setup() {
pinMode(ldrsensor,INPUT);
pinMode(led,OUTPUT);


}

void loop() {
val = analogRead(ldrsensor);
if(val<=200)
{
  digitalWrite(led,HIGH);
  delay(1000);
}  
else
{
  digitalWrite(led,LOW);
  delay(1000);
  
}

}

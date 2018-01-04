void setup()
{
  pinMode(6,OUTPUT); // pin para la luz roja de vehículos
  pinMode(8,OUTPUT); // pin para la luz verde de vehículos
  pinMode(7,OUTPUT); // pin para la luz ámbar
  pinMode(9,OUTPUT); // pin para la luz roja de peatones
  pinMode(10,OUTPUT); // pin para la luz verde de peatones
}

void loop()
{
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  delay(6000);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(3000);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
}
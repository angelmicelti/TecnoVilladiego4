// Tecnología 4º E.S.O.
// I.E.S. Virgen de Villadiego (Peñaflor)

void setup()
{
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}


void loop()
{
  digitalWrite(6,HIGH);
  delay(6000);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);
  delay(3000);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
}

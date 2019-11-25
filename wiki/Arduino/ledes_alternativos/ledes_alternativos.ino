// Tecnología 4º E.S.O.
// I.E.S. Virgen de Villadiego (Peñaflor)

void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(1000);
}

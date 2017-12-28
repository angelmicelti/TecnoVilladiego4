void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH); // Activa el pin 12
  delay(1000); // Espera 1000 milisegundos(s)
  digitalWrite(12, LOW); // Desactiva el pin 12
  delay(1000); // Espera 1000 milisegundos(s)
}

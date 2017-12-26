double valor;

double i;

void actualizar_leds() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  if ((valor == 1)) {
    digitalWrite(5, HIGH);

  }
  if ((valor == 2)) {
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);

  }
  if ((valor == 3)) {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);

  }
  if ((valor == 4)) {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);

  }
  if ((valor == 5)) {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);

  }
  if ((valor == 6)) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);

  }
}

double math_random_int(int a,int b) {
  if (a > b) {
    int c = a;
    a = b;
    b = c;
  }
  return (double)random(a,b+1);
}
void tirar_dado() {
  valor = 0;
  actualizar_leds();
  delay(2000);
  valor = math_random_int(1, 6);
  actualizar_leds();
}

void esperar_pulsacion() {
  while ((!digitalRead(10))) {
    delay(50);
  }
  while (digitalRead(10)) {
    delay(50);
  }
}

void test_inicio() {
  for (i = 1; i <= 6; i=i+1) {
    valor = i;
    actualizar_leds();
    delay(500);
  }
  valor = 0;
  actualizar_leds();
}

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  randomSeed(analogRead(0));
  pinMode(10, INPUT);
    test_inicio();

}


void loop()
{

    esperar_pulsacion();
    tirar_dado();

}
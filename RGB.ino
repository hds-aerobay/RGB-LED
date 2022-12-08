int r=13;
int g=12;
int b=11;
int dt=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(dt);

  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(dt);

  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, HIGH);
  delay(dt);

  digitalWrite(r, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(b, HIGH);
  delay(dt);

  digitalWrite(r, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(dt);

  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  delay(dt);

  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  delay(dt);

  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(dt);
}

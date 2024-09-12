// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 600) {
    digitalWrite(11, HIGH);
    digitalWrite(4, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(11, LOW);
    delay(500); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(4, LOW);
    digitalWrite(11, LOW);
  }
}
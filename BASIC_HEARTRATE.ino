const int pin = 26;
void setup()
{
  Serial.begin(9600);
  pinMode(pin , INPUT);
}
void loop()
{
  int sensorpin = analogRead(pin);
  Serial.print("PULSE: ");
  Serial.println(sensorpin);
  delay(3000);
}
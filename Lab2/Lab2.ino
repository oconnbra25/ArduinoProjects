
int potPosition;

void setup()
{
  pinMode(13, OUTPUT); //LED
  Serial.begin(9600);  //setup serial monitor
}

void loop()
{
  potPosition = analogRead(0); //position of potentiometer
  Serial.println(potPosition);
  digitalWrite(13, HIGH);
  delay(potPosition); // Wait for potPosition time
  digitalWrite(13, LOW);
  delay(potPosition); // Wait for potPosition time
}

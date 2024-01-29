// Brady O'Connor
// Create "traffic light"
// Start red on for 5 sec
// Green for 5 sec
// Yellow for 2 sec
// Back to red

void setup()
{
  pinMode(13, OUTPUT); // Red
  pinMode(12, OUTPUT); // Yellow
  pinMode(11, OUTPUT); // Green
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5 seconds
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 5 seconds
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 2 seconds
  digitalWrite(12, LOW);
}

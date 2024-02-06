
//constants dont change so it makes it easier on the memory
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 13;

//variables will change that will state the current yes/no on/off of the buttons
int buttonState1 = 0;
int buttonState2 = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);     //led is output
  pinMode(buttonPin1, INPUT);  //button is input
  pinMode(buttonPin2, INPUT);  //button is input
}

void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
    
  if (buttonState1 == HIGH && buttonState2 == HIGH) {
    digitalWrite(ledPin, LOW);
  } else if ((buttonState1 == HIGH && buttonState2 == LOW) || (buttonState1 == LOW && buttonState2 == HIGH)) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}

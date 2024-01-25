void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(11,OUTPUT);
pinMode(9,OUTPUT);
pinMode(7,OUTPUT);
pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH); //light 1 green
digitalWrite(3,HIGH); //light 2 red
delay(5000);          //wait5 sec
digitalWrite(13,LOW); //light 1 turns yellow
digitalWrite(11,HIGH);
delay(2000);
digitalWrite(11,LOW);
digitalWrite(9,HIGH); //light 1 red
digitalWrite(3,LOW);
digitalWrite(7,HIGH); //light 2 green
delay(5000);
digitalWrite(7,LOW); //light 2 yellow
digitalWrite(5,HIGH);
delay(2000);
digitalWrite(5,LOW); //end of light 2 yellow

//this code is broken for some reason, could have done something wrong with arduiino itself
//attempt to run 2 traffic lights at the same time

}

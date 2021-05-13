
//Ruben Daniel Lopez Suarez
//https://www.tinkercad.com/things/kExzpvjhZXd-arduino-led/editel?sharecode=DkgHMKNFqO9FR4llxJbYXr19XqwrtViBXg6zQBE9LKA
int led = 9;           
int brightness = 0;    
int fadeAmount = 5;    


void setup() {
  
  pinMode(led, OUTPUT);
}


void loop() {
  
  analogWrite(led, brightness);

  
  brightness = brightness + fadeAmount;

 
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}

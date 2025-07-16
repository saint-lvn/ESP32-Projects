const int potPin = 2; 
const int ledPin = 5;   

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potPin);         
  int brightness = map(potValue, 0, 1023, 0, 255); 

  analogWrite(ledPin, brightness);          
  Serial.println(potValue);
  delay(10); 
 
}
const int buttonPin = 2;     
const int ledPin = 13;       

int buttonState = 0;        
int lastButtonState = 0;     
int ledState = LOW;          

void setup() {
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT);   
  digitalWrite(ledPin, ledState); 

void loop() {
  buttonState = digitalRead(buttonPin); 

 
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
   
    delay(50);
  }

  lastButtonState = buttonState; 
}
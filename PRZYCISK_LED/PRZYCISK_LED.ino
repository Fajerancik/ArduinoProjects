int buttonPin = 2;
int ledPin = 13;

int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); 
}

void loop() {
  buttonState = digitalRead(buttonPin); 

 
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      digitalWrite(ledPin, HIGH);
    }else{
      digitalWrite(ledPin, LOW);
    }

    delay(50);
  }

  lastButtonState = buttonState; 
}

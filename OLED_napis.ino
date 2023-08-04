#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1.5);
  display.setTextColor(WHITE);
  display.setCursor(0, 1);
  // Display static text

}

void loop() {
  display.setCursor(30,10);

  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();
  
  display.setCursor(60,30);
  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();

  display.setCursor(10,50);
  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();

  display.setCursor(5,25);
  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();

  display.setCursor(15,45);
  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();

  display.setCursor(45,45);
  display.println("No signal!");
  display.display(); 
  delay(1000);
  display.clearDisplay();

}

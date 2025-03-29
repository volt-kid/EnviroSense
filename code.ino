#include <DHT.h> // INCLUDE DHT LIBRARY

#define DHTPIN 2 // DEFINE DHT PIN
#define DHTTYPE DHT11 // DEFINE DHT TYPE

DHT dht(DHTPIN, DHTTYPE); // DEFINE OBJECT OF CLASS OF DHT

int redPin = 13; // DEFINE PIN NUMBER FOR RED
int yellowPin = 11; // DEFINE PIN NUMBER FOR YELLOW
int greenPin = 9; // DEFINE PIN NUMBER FOR GREEN

int buzzerPin = 7; // DEFINE PIN NUMBER FOR BUZZER

void setup() {
  Serial.begin(9600); // CONNECT IN 9600 SPEED
  dht.begin(); // START DHT
  
  pinMode(redPin, OUTPUT); // SET RED PIN AS OUTPUT
  pinMode(yellowPin, OUTPUT); // SET YELLOW PIN AS OUTPUT
  pinMode(greenPin, OUTPUT); // SET GREEN PIN AS OUTPUT
  pinMode(buzzerPin, OUTPUT); // SET BUZZER PIN AS OUTPUT 
}

void loop() {
  delay(2000); // WAIT 2 SECONDS FOR READING VALUE OF SYSTEM 
  
  float humidity = dht.readHumidity(); // READ SYSTEM HUMIDITY AND STORE TO HUMIDITY
  float temperature = dht.readTemperature(); // READ SYSTEM AND STORE VALUE TO TEMPERATURE VARIABLE 
  
  if (temperature > 30) {
    digitalWrite(redPin, HIGH); // BRIGHT RED LIGHT IF TEMPERATURE GREATER THAN 30° C
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if (temperature > 25) {
    digitalWrite(redPin, LOW); 
    digitalWrite(yellowPin, HIGH); // BRIGHT YELLOW LIGHT IF TEMPERATURE LESS THAN 30° C
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(redPin, LOW); 
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);  // BRIGHT GREEN LIGHT IF TEMPERATURE LESS THAN 25° C
  }
  
  if (humidity > 70) {
    tone(buzzerPin, 1000); // BUZZ IF HUMIDITY GREATER THAN 70%
    delay(3000); 
    noTone(buzzerPin);
    delay(5000);
  }
}

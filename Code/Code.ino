#include <Servo.h>
#define TRIG_PIN 3
#define ECHO_PIN 4
Servo lidServo;
const int servoPin = 9;
const int irPin = 2;
unsigned long lastActionTime = 0;
const unsigned long cooldown = 3000;
long getDistanceCM() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH, 30000); 
  long distance = duration * 0.034 / 2; 
  return distance;
}
void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  lidServo.attach(servoPin);
  pinMode(irPin, INPUT);
  Serial.begin(9600);
  lidServo.write(0); 
  Serial.println("Binny Smart Dustbin Started ✅");
}
void loop() {
  int irValue = digitalRead(irPin);
  unsigned long currentTime = millis();
  if (irValue == 0 && (currentTime - lastActionTime > cooldown)) {
    Serial.println("Hand Detected ✋ -> Opening Lid");
    lidServo.write(00);   
    delay(2000);          
    lidServo.write(70);   
    Serial.println("Lid Closed");
    lastActionTime = currentTime;
  }
  int fullCount = 0;
  int emptyCount = 0;
  for (int i = 0; i < 4; i++) {
    long d = getDistanceCM();
    Serial.print("Reading "); Serial.print(i + 1);
    Serial.print(": "); Serial.print(d); Serial.println(" cm");
    if (d > 0 && d <= 5) fullCount++;        
    if (d >= 13 && d <= 17) emptyCount++;    
    delay(200);
  }
  if (fullCount >= 2) {
    Serial.println("Bin Status: FULL 🚨");
  } else if (emptyCount >= 2) {
    Serial.println("Bin Status: EMPTY ✅");
    Serial.println("TRIGGER"); 
  } else {
    Serial.println("Bin Status: UNCERTAIN ⚠️");
  }
  Serial.println("-----");
  delay(2000); 
}

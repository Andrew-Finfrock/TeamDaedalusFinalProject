// the setup function runs once when you press reset or power the board
#include <Adafruit_CircuitPlayground.h>
void setup() {
// initialize digital pin 13 as an output.
pinMode(13, OUTPUT);
CircuitPlayground.begin();
}

// the loop function runs over and over again forever
short score = 0;
void loop() {
if (CircuitPlayground.lightSensor() <= 100){
  digitalWrite(13, LOW);
  CircuitPlayground.playTone(600,200);
  score = score + 1;
  delay(500);
} else digitalWrite(13, HIGH);

CircuitPlayground.setPixelColor(score-1, 0,   255,   0);
 // turn the LED on (HIGH is the voltage level)
  if (score == 10){
    CircuitPlayground.playTone(800,200);
    CircuitPlayground.playTone(600,200);
    CircuitPlayground.playTone(400,200);
    CircuitPlayground.playTone(600,200);
    CircuitPlayground.playTone(800,500);
    CircuitPlayground.clearPixels();
    score = 0;
  }
// turn the LED off by making the voltage LOW

}

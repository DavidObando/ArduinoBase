/*************************************************
* Public Constants
*************************************************/

// LED pin definitions
#define LED_RED     10

// Buzzer pin definitions
#define BUZZER1     4
#define BUZZER2     7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_RED, OUTPUT);
  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  digitalWrite(BUZZER1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_RED, HIGH); // increase voltange on red led (turns in on)
  tone(BUZZER2, 1104, 100); // buzzer2 gets a 1104 Hertz signal for 100 milliseconds
  delay(100); // wait 100 milliseconds
  digitalWrite(LED_RED, LOW); // decrease voltage on red led (turns it off)
  delay(900); // wait 900 milliseconds
}



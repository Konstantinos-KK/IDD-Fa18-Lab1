/* Modified from source https://www.arduino.cc/en/Tutorial/Blink */

int out = LED_BUILTIN;
void setup() {
  pinMode(out, OUTPUT);
}

void loop() {
  digitalWrite(out, HIGH);   
  delay(1000);                       
  digitalWrite(out, LOW);   
  delay(1000);                      
  }

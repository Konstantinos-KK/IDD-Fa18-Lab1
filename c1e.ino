/* Modified from source https://www.arduino.cc/en/Tutorial/Blink */

int out = LED_BUILTIN;
int i = 500;
int j = 100;
void setup() {
  pinMode(out, OUTPUT);
}

void loop() {
  i=i-j;
  digitalWrite(out, HIGH);   
  delay(i);                       
  digitalWrite(out, LOW);   
  delay(i);  
  if (i==0){j = -100;}
  if (i==500){j = 100;}
  }

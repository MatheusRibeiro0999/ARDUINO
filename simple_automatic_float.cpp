//THIS PROGRAM NEEDS 2 LEDS OF DIFFERENTS COLORS AND A LIQUID LEVEL SENSOR
//PIN CONNECTED TO THE LIQUID SENSOR LEVEL
int pinosensor = 3;
//GREEN LED
int pino_led_full = 6;
//RED LED
int pino_led_empty = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(pinosensor, INPUT);
  pinMode(pino_led_full, OUTPUT);
  pinMode(pino_led_empty, OUTPUT);
}
void loop()
{
  int state = digitalRead(pinosensor);
  Serial.print("state sensor : ");
  Serial.println(state);
  switch(state)
  {
  case 0:
    digitalWrite(pino_led_empty, LOW);
    digitalWrite(pino_led_full, HIGH);
    break;
  case 1:
    digitalWrite(pino_led_empty, HIGH);
    digitalWrite(pino_led_full, LOW);
    break;
  }
  delay(100);
}

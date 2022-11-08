* LED TAPE RGB (v1.0)
* CONTROLLING RGB LED STRIP WITH ARDUÍNO
*PRIMARY COLORS LIGHTS UPFOR 2 SECONDS. LASTLY, TWO COLORS ARE MIXED TO FORM A NEW COLOR

*MAKE SURE TO CONNECT THE PINS CORRECTLY IN THE CONFIGURED POSITIONS, IF POSSIBLE, USE PROTOBOARD
*********************************************************************************/

// DECLARING THE PINS
const int PINO_LED_R = 11;	// RED
const int PINO_LED_G = 10;  // GREEN
const int PINO_LED_B = 9;	// BLUE

void setup() {
  // SET PINS AS OUTPUT
  pinMode(PINO_LED_R, OUTPUT); // LED RED
  pinMode(PINO_LED_G, OUTPUT); // LED GREEN
  pinMode(PINO_LED_B, OUTPUT); // LED BLUE
}

void loop() {
  // TURNING ON RED LED, TURNING OFF GREEN AND BLUE LEDS
  digitalWrite(PINO_LED_R, HIGH); // TURN ON RED LED
  digitalWrite(PINO_LED_G, LOW);  // TURN OFF GREEN LED
  digitalWrite(PINO_LED_B, LOW);  // TURN OFF BLUE LED
  delay(2000);                    // LEAVE THE RED LED ON FOR 2 SECONDS
  digitalWrite(PINO_LED_R, LOW);  // TURN OFF RED LED
  delay(2000);                    // WAIT 2 SECONDS TO TURN ON NEXT LED

  // TURNING ON GREEN LED, TURNING OFF RED AND BLUE LED
  digitalWrite(PINO_LED_R, LOW);  // TURN OFF RED LED
  digitalWrite(PINO_LED_G, HIGH); // TURN ON GREEN LED
  digitalWrite(PINO_LED_B, LOW);  // TURN OFF BLUE LED
  delay(2000);                    // LEAVE THE GREEN LED ON FOR 2 SECONDS
  digitalWrite(PINO_LED_G, LOW);  // TURN OFF GREEN LED
  delay(2000);                    // WAIT 2 SECONDS TO TURN ON NEXT LED

  // TURNING ON BLUE LED, TURNING OFF RED AND GREEN
  digitalWrite(PINO_LED_R, LOW);  // TURN OFF RED LED 
  digitalWrite(PINO_LED_G, LOW);  // TURN OFF GREEN LED 
  digitalWrite(PINO_LED_B, HIGH); // TURN ON BLUE LED
  delay(2000);                    // WAIT 2 SECONDS TO TURN ON NEXT LED
  digitalWrite(PINO_LED_B, LOW);  // TURN OFF BLUE LED 
  delay(2000);                    // WAIT 2 SECONDS TO RETURN TO RED LED

  // TURNING ON RED AND BLUE LED TO CREATE PURPLE
  digitalWrite(PINO_LED_R, HIGH); // TURN ON RED LED 
  digitalWrite(PINO_LED_G, LOW);  // TURN OFF GREEN LED
  digitalWrite(PINO_LED_B, HIGH); // TURNON BLUE LED 
  delay(2000);                    // WAIT 2 SECONDS TO TURN ON NEXT LED
  digitalWrite(PINO_LED_R, LOW);  // TURN OFF RED LED 
  digitalWrite(PINO_LED_B, LOW);  // TURN OFF BLUE LED 
  delay(2000);                    // WAIT 2 SECONDS TO RETURN TO RED LED 
}

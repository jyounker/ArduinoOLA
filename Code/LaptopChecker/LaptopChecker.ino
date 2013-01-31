/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledRed = 13;
int ledGreen = 12;
int val = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(ledGreen, OUTPUT);     
  pinMode(ledRed, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  byte byteRead;

   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
  
    /* read the most recent byte */
    byteRead = Serial.read();
    //You have to subtract '0' from the read Byte to convert from text to a number.
    byteRead=byteRead-'0';
    
    //0 laptops, show red
    if(byteRead==0){
          digitalWrite(ledGreen, LOW); //turn off green
          digitalWrite(ledRed, HIGH); //turn on red
    }
    
    //More than 0 laptops, show green LED
    if(byteRead>0){
          digitalWrite(ledYellow, LOW); //turn off red
          digitalWrite(ledRed, HIGH); //turn on green
      }

}
}

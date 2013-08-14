/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonAPin = 5;     // the number of the pushbutton pin
const int buttonBPin = 4;     // the number of the pushbutton pin
const int buttonCPin = 3;     // the number of the pushbutton pin
const int buttonDPin = 2;     // the number of the pushbutton pin
const int pirInPin = 6;     // the number of the pushbutton pin




const int ledPin =  12;      // the number of the LED pin
const int pirLedPin =  11;      // the number of the LED pin


// variables will change:
int buttonAState = 0;         // variable for reading the pushbutton status
int buttonBState = 0;         // variable for reading the pushbutton status
int buttonCState = 0;         // variable for reading the pushbutton status
int buttonDState = 0;         // variable for reading the pushbutton status
int pirState = 0;         // variable for reading the pushbutton status




void setup() {
  Serial.begin(9600); 
  Serial.println("serial started");
   
  delay(2000);
 
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);  
   // initialize the LED pin as an output:
  pinMode(pirLedPin, OUTPUT);  
 
  
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonAPin, INPUT);  
  pinMode(buttonBPin, INPUT);  
  pinMode(buttonCPin, INPUT);  
  pinMode(buttonDPin, INPUT);  
    pinMode(pirInPin, INPUT);  
  
  
  
  
  Serial.println("pins initialized");
  delay(1000);
  Serial.println("begin loop");
}

void loop(){
  // read the state of the pushbuttons value:
  buttonAState = digitalRead(buttonAPin);
  buttonBState = digitalRead(buttonBPin);
  buttonCState = digitalRead(buttonCPin);
  buttonDState = digitalRead(buttonDPin);
  pirState = digitalRead(pirInPin);
  
  if(buttonAState == HIGH||buttonBState == HIGH||buttonCState == HIGH||buttonDState == HIGH){
    
      // check if the pushbutton is pressed.
      // if it is, the buttonState is HIGH:
      if (buttonAState == HIGH) {     
        // turn LED on:    
        digitalWrite(ledPin, HIGH);  
        Serial.print("A");
      } 
      if (buttonBState == HIGH) {     
        // turn LED on:    
        digitalWrite(ledPin, HIGH);  
        Serial.print("B");
      } 
      if (buttonCState == HIGH) {     
        // turn LED on:    
        digitalWrite(ledPin, HIGH);  
        Serial.print("C");
      } 
      if (buttonDState == HIGH) {     
        // turn LED on:    
        digitalWrite(ledPin, HIGH);  
        Serial.print("D");
      } 
      
      //button press pauses listening (to software debounce)
      delay(500);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    //Serial.print("1");
  }
  
  
  if(pirState == HIGH){
    digitalWrite(pirLedPin, HIGH); 
    Serial.print("1");
    
  }else{
    digitalWrite(pirLedPin, LOW); 
  }
  
  delay(10);
  
}

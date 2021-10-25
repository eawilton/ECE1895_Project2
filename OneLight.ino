//Microcontroller "Hello World" - One LED
//Elissa Wilton

void setup() {    
  pinMode(8, OUTPUT); // sets the digital pin 8 as output
}

void loop() {  
  digitalWrite(8, HIGH); // sets the digital pin 8 on
  delay(1000);            // waits for a second
  digitalWrite(8, LOW);  // sets the digital pin 8 off
  delay(1000);    // waits for a second
}

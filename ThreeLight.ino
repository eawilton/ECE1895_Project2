//Microcontroller "Hello World" - Three LED
//Elissa Wilton

void setup() {
  pinMode(6, OUTPUT);    // sets the digital pin 6 as output
  pinMode(7, OUTPUT);    // sets the digital pin 7 as output
  pinMode(8, OUTPUT);    // sets the digital pin 8 as output
  pinMode(9, INPUT);     // sets the digital pin 9 as input
}

void loop() {
  while(digitalRead(9) == HIGH){
    digitalWrite(6, HIGH); // sets the digital pin 6 on
    delay(1000);            // waits for a second
    digitalWrite(6, LOW);  // sets the digital pin 6 off
    delay(1000); 
    digitalWrite(7, HIGH); // sets the digital pin 7 on
    delay(1000);            // waits for a second
    digitalWrite(7, LOW);  // sets the digital pin 7 off
    delay(1000);    
    digitalWrite(8, HIGH); // sets the digital pin 8 on
    delay(1000);            // waits for a second
    digitalWrite(8, LOW);  // sets the digital pin 8 off
    delay(1000);    // waits for a second
  }
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}

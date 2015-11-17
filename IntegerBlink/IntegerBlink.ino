/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  Increments an integer and prints to the serial port.

 */

// Integer counter to provide something to send to serial port
int counter = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);

  // enable serial communication
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for half a second
  counter++;
  Serial.println(counter);  // write counter value to serial port
}

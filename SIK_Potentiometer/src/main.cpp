/*
    SparkFun Inventor’s Kit
    Circuit 1B-Potentiometer

    Changes how fast an LED connected to pin 13 blinks, based on a potentiometer connected to pin A0

    This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
    This code is completely free for any use.

    View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
    Download code at: https://github.com/sparkfun/SIK-Guide-Code
*/
#include <Arduino.h>

int potPosition;       //this variable will hold a value based on the position of the potentiometer

// put function declarations here:
int myFunction(int, int);

void setup() {
    // put your setup code here, to run once:
    //int result = myFunction(2, 3);

    Serial.begin(9600);       //start a serial connection with the computer

    pinMode(13, OUTPUT);      //set pin 13 as an output that can be set to HIGH or LOW
}

void loop() {
    //read the position of the pot
    potPosition = analogRead(A0);    //set potPosition to a number between 0 and 1023 based on how far the knob is turned
    Serial.println(potPosition);     //print the value of potPosition in the serial monitor on the computer

    //change the LED blink speed based on the pot value
    digitalWrite(13, HIGH);           // Turn on the LED
    delay(potPosition);              // delay for as many milliseconds as potPosition (0-1023)

    digitalWrite(13, LOW);            // Turn off the LED
    delay(potPosition);              // delay for as many milliseconds as potPosition (0-1023)
}

// put function definitions here:
int myFunction(int x, int y) {
    return x + y;
}
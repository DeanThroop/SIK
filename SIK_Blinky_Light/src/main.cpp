#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
    // put your setup code here, to run once:
    //int result = myFunction(2, 3);
    pinMode(13, OUTPUT);      // Set pin 13 to output
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(13, HIGH);   // Turn on the LED

    delay(2000);              // Wait for two seconds

    digitalWrite(13, LOW);    // Turn off the LED

    delay(2000);              // Wait for two seconds

}

// put function definitions here:
int myFunction(int x, int y) {
    return x + y;
}
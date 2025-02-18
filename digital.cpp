#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetupGpio();

    // Set GPIO pin 7 as input (WiringPi pin number)
    const int BUTTON_PIN = 18; // BCM pin connected to the button
    const int LED_PIN = 17;    // BCM pin connected to the LED
    pinMode(BUTTON_PIN, INPUT); // Set the button pin as an input
    pinMode(LED_PIN, OUTPUT);   // Set the LED pin as an output

    std::cout << "Press the button to toggle the LED" << std::endl;
    while (true) {
       
      int buttonState = digitalRead(BUTTON_PIN); // Read the button state

        if (buttonState == 1) {
            digitalWrite(LED_PIN, HIGH); // Turn on the LED
            std::cout << "Button pressed! LED on." << std::endl;
        } else {
            digitalWrite(LED_PIN, LOW); // Turn off the LED
            std::cout << "Button released! LED off." << std::endl;
        }

        delay(100); // Small delay to debounce the button
    }

    return 0;
}
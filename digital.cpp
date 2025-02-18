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
    pullUpDnControl(BUTTON_PIN, PUD_UP);
    digitalRead(BUTTON_PIN); // Read the button state

    std::cout << "Press the button to toggle the LED" << std::endl;
    while (true) {
      digitalWrite(LED_PIN, !digitalRead(BUTTON_PIN));
      delay(50);

  
      }

    return 0;
}
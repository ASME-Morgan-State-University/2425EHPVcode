#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetupGpio();

    // Set GPIO pin 7 as input (WiringPi pin number)
    const int BUTTON_PIN = 18; // BCM pin connected to the button
    pinMode(BUTTON_PIN, INPUT); // Set the button pin as an input
    pullUpDnControl(BUTTON_PIN, PUD_UP);
    int state = digitalRead(BUTTON_PIN); // Read the button state
    std::cout << "Press the button to toggle the LED" << std::endl;
     if (state == 1){
      cout << "HIGH"<<endl;
      
     }else { 
      cout <<"LOW"<<endl;
     
     }
  
    return 0;
}
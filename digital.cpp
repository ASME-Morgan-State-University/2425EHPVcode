#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
    
    pinMode(1, INPUT);
    int value = digitalRead(1);
    if ( value >  HIGH ){
        cout << "Pin 2 is HIGH" << endl;
        } else {
        cout << "Pin 2 is LOW" <<endl;
        }
        delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}
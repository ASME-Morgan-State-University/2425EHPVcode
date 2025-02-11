#include <wiringPi.h>
#include <iostream>
using namespace std; 

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
    
    pinMode(2, OUTPUT);
    int value = digitalWrite(2,HIGH);
    if ( value == HIGH ){
        cout << "Pin 2 is HIGH" << endl;
        } else {
        cout << "Pin 2 is LOW" <<endl;
        }
        delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}
#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
    
    pinMode(3, INPUT);
    int value = digitalRead(3);
    cout << value <<endl; 
    while (true)
    {
    
     if( value ==  HIGH ){
        cout << "Pin 2 is HIGH" << endl;
        digitalWrite(3,HIGH);
        delay(1000);
        } else if(value == LOW) {
        cout << "Pin 2 is LOW" <<endl;
        digitalWrite(3,LOW);
        delay(250); // Delay to avoid excessive printing
        }
        
    }
   
    return 0;
}
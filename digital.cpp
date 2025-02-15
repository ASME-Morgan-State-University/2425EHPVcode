#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
      int Botton=3;
    pinMode(Botton, INPUT);
    pullUpDnControl(Botton,PUD_UP);
    int value = digitalRead(Botton);
    
   while (true)
    {
    
     if( value == HIGH ){
        cout << "Pin:1 " << endl;
        cout << value <<endl;
        delay(1000);
        } else if(value == LOW) {
        cout << "Pin: 0 " <<endl;
        cout<< value <<endl;
        delay(250); // Delay to avoid excessive printing
        }
        
    }
   
    return 0;
}
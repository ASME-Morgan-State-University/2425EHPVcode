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
    pullUpDNControl(Botton,PUD_UP);
    int value = digitalRead(Botton);
    while (true)
    {
       if (value == LOW){
        cout << "it hit"<<endl;
        delay(200);
       }
    }
    
   /* while (true)
    {
    
     if( value = 1 ){
        cout << "Pin 2 is HIGH" << endl;
        digitalWrite(3,HIGH);
        delay(1000);
        } else if(value = 0) {
        cout << "Pin 2 is LOW" <<endl;
        digitalWrite(3,LOW);
        delay(250); // Delay to avoid excessive printing
        }
        
    }*/
   
    return 0;
}
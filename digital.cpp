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
    int inputs [5];
     int a;
    int size = sizeof(inputs)/sizeof(inputs[0]);
    std::cout << "Press the button to toggle the LED" << std::endl;
  
   
   for ( int i =0 ; i < size; i++){
     cout <<" hit the button"<< i <<":  " <<endl;
     if (state == 1){
      cout << "HIGH"<<endl;
      int a = digitalWrite(state,HIGH);
      cin >> a[i];
     }else { 
      cout <<"LOW"<<endl;
      a = digitalWrite(state,LOW);
      cin >> a[i];
     }
   }

   return 0;


}
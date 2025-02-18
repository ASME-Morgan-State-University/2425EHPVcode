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
    const int arraySize= 10;
    int currentIndex = 0;

    cout << "______Starting_____" << endl;

    state[currentIndex]= state;
     for (int i =0; i < state; i++ ){
          cout << " HIGH"<< state[i]<< endl;
      for(int j =0; j > state; j++){
        cout << " LOW "<<state[j]<< endl;
      }
     }
     currentIndex =(currentIndex +1) % arraySize;
     delay(100);
  
    return 0;
    
}
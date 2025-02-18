#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetupGpio();

    const int BUTTON_PIN = 18;
    int arraySize=10;
    int currentIndex = 0;
    int state[arraySize];

    pinMode(BUTTON_PIN, INPUT); // Set the button pin as an input
    pullUpDnControl(BUTTON_PIN, PUD_UP);
    state = digitalRead(BUTTON_PIN); // Read the button state

  

    cout << "______Starting_____" << endl;

    state [currentIndex]= state;
     for (int i =0; i < arraySize; i++ ){
            if ( state[i] == 1){
              cout <<"HIGH"<<endl;
            }else{
              cout <<"LOW"<<endl;
            }
          }
     
     currentIndex =(currentIndex +1) % arraySize;
     delay(100);
  
    return 0;
    
}
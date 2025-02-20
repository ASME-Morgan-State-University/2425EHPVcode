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
    vector<int> buttonStates;
    cout << "______Starting_____" << endl;
    for (int i = 0; i < 10; ++i) {
      int buttonState = digitalRead(BUTTON_PIN);
      buttonStates.push_back(buttonState);

      std::cout << "Button state " << i + 1 << ": " << buttonState << std::endl;

      // Wait for a short period before reading again
      delay(1000);  // 1 second
  }

      // Display the stored button states
       std::cout << "Stored button states:" << std::endl;
     for (int i = 0; i < buttonStates.size(); ++i) {
      std::cout << "State " << i + 1 << ": " << buttonStates[i] << std::endl;
  }


  
   
    cout << "______Ending_____" << endl;
    /*int state = digitalRead(BUTTON_PIN); // Read the button state
    state [currentIndex] = state;
     for (int i =0; i < arraySize; i++ ){
            if ( state[i] == 1){
              cout <<"HIGH"<<endl;
            }else{
              cout <<"LOW"<<endl;
            }
          }
     
     currentIndex =(currentIndex +1) % arraySize;
     delay(100);
        }*/
    return 0;
    
}
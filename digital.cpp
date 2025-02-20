#include <wiringPi.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
int main(void) {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetupGpio();

    const int BUTTON_PIN = 18;
    int buttonState; 
    int numEntries;
    
    
   pinMode(BUTTON_PIN, INPUT); // Set the button pin as an input
   pullUpDnControl(BUTTON_PIN, PUD_UP);
   buttonState = digitalRead(BUTTON_PIN);

   struct Userdata
   {
    int buttonState;
   }
   Userdata(numEntries)
   for (int i=0; i< numEntries;i++ ){
     Userdata[i].buttonState = digitalRead(BUTTON_PIN);
     cout<< "Button state for user"<< i + 1 << ": " <<Userdata[i].buttonState << endl;
     delay(1000);
    }
    cout <<"User data entered: "<< endl;
    for( int i=0; i < numEntries; i++){
      cout <<" User "<< i+1 << ": name = "<< Userdata[i].name<< ", Button State = "<<Userdata[i].buttonState<<endl; 
    }
   
    return 0;
    
}
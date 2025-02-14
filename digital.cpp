#include <wiringPi.h>
#include <iostream>
using namespace std; 
  int snsor2(int state, int ms);

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();
    /* ___variables___ */
    int ms;
    int state = 0;
   /* __Inputs/Outputs__ */

    ms=pinMode( 8, INPUT);  // the senors signal line
  /*___Fuctions details___*/     
   int  motion= snsor2( state,ms);
 /*_____ what happes____*/
  cout <<" the state is: "<< state  <<endl;
        delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}

int sensor2( int state , int ms){
    int status;
      while (true){
      status = digitalRead(ms);   
      if  (status >= 0 ) {           
          cout <<" Motion detected "<<endl; 
          state = HIGH; 
          delay(500);       
        }else{
            cout<< "The action/ motion has stopped"<<endl;
            state = LOW; 
            delay(500);      
        }
      }
      
    return(state);

}
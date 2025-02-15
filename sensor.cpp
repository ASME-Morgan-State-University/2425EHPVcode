#include <wiringPi.h>
#include <iostream>
using namespace std; 
int sensor2(int state, int pi);

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();
    /* ___variables___ */
    int mss;
    int pi;
    int status;
    int state;
   /* __Inputs/Outputs__ */
     pi = pinMode(8, INPUT); 
  /*___Fuctions details___*/  
   mss = sensor2(state , pi);
   /*_____ what happes____*/
    cout <<" the state is: "<< state  <<endl;
   delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}

int sensor2(int state, int pi){
  int status;
      while (true){
      status = digitalRead(pi);   
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
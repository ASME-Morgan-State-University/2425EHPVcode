#include <wiringPi.h>
#include <iostream>
using namespace std; 
int sensor2(int pi, int state);

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();
    /* ___variables___ */
    int mss;
    int pi= 2;
    int state;
   /* __Inputs/Outputs__ */
     pinMode(pi,INPUT); 
  /*___Fuctions details___*/  
   mss = sensor2(pi,state);
   /*_____ what happes____*/
    cout <<" the state is: "<< mss  <<endl;
   delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}

int sensor2( int pi, int state){
  int status;
      while (true){
      status = digitalRead(pi);   
      if  (status >= 0 ) {           
          cout <<" Motion detected "<<endl; 
          digitalWrite(state,HIGH);  
          delay(500);       
        }else{
            cout<< "The action/ motion has stopped"<<endl;
            digitalWrite(state,LOW); 
            delay(500);      
        }
      }
      
    return(state);
}
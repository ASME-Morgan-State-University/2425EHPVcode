#include <wiringPi.h>
#include <iostream>
using namespace std; 
int sensor2(int pi);

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();
    /* ___variables___ */
    int mss;
    int pi= 2;
   /* __Inputs/Outputs__ */
     pinMode(pi,INPUT); 
  /*___Fuctions details___*/  
   mss = sensor2(pi);
   /*_____ what happes____*/
    cout <<" the state is: "<< mss  <<endl;
   delay(100); // Delay to avoid excessive printing
    
   
    return 0;
}

int sensor2(int pi){
  int status; 
      while (true){
      status = digitalRead(pi);   
      if  (status > 0 ) {           
           
          digitalWrite(status,HIGH);  
          delay(500);       
        }else{
           
            digitalWrite(status,LOW); 
            delay(500);      
        }
      }
      
    return(status);
}
#include <iostream>
#include <ctime>
#include <random>
using namespace std;
double getRandNum();
int main (){  
   
    
      getRandNum();
       cout << getRandNum() << endl;
       
   
      
}
  double getRandNum(){
 srand(time(0));// time generate number   
     // Set up the random number generator
     std::random_device rd;
     std::mt19937 generator(rd());
     std::uniform_real_distribution<double> distribution(0.0, 10.0); // Range [0.0, 10.0]
     // Generate a random number
     double raw_number = distribution(generator);
     // Round the number to 3 decimal places
     double rounded_number = std::round(raw_number * 1000.0) / 1000.0;
     const int sizeArray = 1;
     double numberArray[sizeArray];
     double value;
     for(int i = 0; i < sizeArray; i++){
      numberArray[i] =  rounded_number;
      value = numberArray[i];
     // cout<< fixed<<setprecision(3)<<numberArray[i]<<"   ";// Pritning the random numbers
   }
   return(value);
  } 
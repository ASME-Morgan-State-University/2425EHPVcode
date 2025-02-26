#include <iostream>
#include <ctime>
#include<cstdlib>
#include <iomanip>
#include <cmath>
#include <random>
using namespace std;
float getRandNum( float v);
int main (){  
   
       float v;
      getRandNum(v);
       cout<< v << endl;
       
   
      
}
 float getRandNum( float v){

   //const int sizeArray = 1;
  // double numberArray[sizeArray];
  double value;
   srand(time(0));
   std::random_device rd;
   std::mt19937 gen(rd());    
   float m=pow(10,2);
   float n= round(gen() * m) / m;


   /*for(int i = 0; i < sizeArray; i++){
      numberArray[i] =num;
      value = numberArray[i];
     // cout<< fixed<<setprecision(3)<<numberArray[i]<<"   ";// Pritning the random numbers
   }*/
   return(n);
  } 
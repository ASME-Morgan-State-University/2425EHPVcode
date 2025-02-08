#include "headersAndDefs\exampleSensorCommands.h"

 int main(){
   ExampleSensor sensor;
   double test = sensor.get();
   std::cout  << test;
   sensor.send(0,1);
 }

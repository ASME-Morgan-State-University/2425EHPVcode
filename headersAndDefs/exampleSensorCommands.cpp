#include "headersAndDefs\exampleSensorCommands.h"
#include <iostream>

double ExampleSensor::get(){
    return(0.1);
}

void ExampleSensor::send(int parmA, int parmB){
    std::cout << ("OK");
}
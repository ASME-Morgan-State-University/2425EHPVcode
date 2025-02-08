// exampleSensorCommands.h

#ifndef EXAMPLESENSORCOMMANDS_H // If EXAMPLESENSORCOMMANDS_H is not defined
#define EXAMPLESENSORCOMMANDS_H // Then define EXAMPLESENSORCOMMANDS_H


class ExampleSensor {
public:
// Some Sensors will only send data, some will only receive, some do both. Understand what sensor you have how what it needs to operate.  
    double get(); // Sensor send Data
    void send(int parmA, int parmB); // Sensor Receive Data
};

// The idea is that when you call the method ExampleSensor.get() would return sensor data
// When you call ExampleSensor.send(parmA, parmB, parmEtc...)

#endif // EXAMPLESENSORCOMMANDS_H
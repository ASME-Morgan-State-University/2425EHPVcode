#include <wiringPi.h>
#include <iostream>

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
    
    pinMode(2, INPUT);
    for (::)
     {
        // Read the digital signal
        int value = digitalWrite(2,HIGH);
        if (value == HIGH) {
            std::cout << "Pin 2 is HIGH" << std::endl;
        } else {
            std::cout << "Pin 2 is LOW" << std::endl;
        }
        delay(100); // Delay to avoid excessive printing
    }

    return 0;
}
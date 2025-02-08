#include <wiringPi.h>
#include <iostream>

int main() {
    // Initialize WiringPi and set up the pin numbering
    wiringPiSetup();

    // Set GPIO pin 7 as input (WiringPi pin number)
    int pin = 7;
    pinMode(pin, INPUT);

    while (true) {
        // Read the digital signal
        int value = digitalRead(pin);
        if (value == HIGH) {
            std::cout << "Pin 7 is HIGH" << std::endl;
        } else {
            std::cout << "Pin 7 is LOW" << std::endl;
        }
        delay(100); // Delay to avoid excessive printing
    }

    return 0;
}
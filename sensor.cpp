#include <wiringPi.h>
#include <iostream>
using namespace std; 
int sensor2(int pi);

int main() {
   // Initialize WiringPi and set up the pin numbering
   wiringPiSetup();
   
  #include <TinyGPS++.h>
  #include <SoftwareSerial.h>
  /*
     This sample sketch demonstrates the normal use of a TinyGPS++ (TinyGPSPlus) object.
     It requires the use of SoftwareSerial, and assumes that you have a
     4800-baud serial GPS device hooked up on pins 4(rx) and 3(tx).
  */
  static const int TXPin = 4, RXPin = 3;
  static const uint32_t GPSBaud = 9600;
  
  // The TinyGPS++ object
  TinyGPSPlus gps;
  
  // The serial connection to the GPS device
  SoftwareSerial ss(RXPin, TXPin);
  
  void setup()
  {
    Serial.begin(115200);
    ss.begin(GPSBaud);
    Serial.println(F("DeviceExample.ino"));
    Serial.println(F("A simple demonstration of TinyGPS++ with an attached GPS module"));
    Serial.print(F("Testing TinyGPS++ library v. ")); Serial.println(TinyGPSPlus::libraryVersion());
    Serial.println(F("by Mikal Hart"));
    Serial.println();
  }
  
  void loop()
  {
    // This sketch displays information every time a new sentence is correctly encoded.
    while (ss.available() > 0)
      if (gps.encode(ss.read()))
        displayInfo();
  
    if (millis() > 5000 && gps.charsProcessed() < 10)
    {
      Serial.println(F("No GPS detected: check wiring."));
      while(true);
    }
  }
  
  void displayInfo()
  {
    Serial.print(F("Location: ")); 
    if (gps.location.isValid())
    {
      Serial.print(gps.location.lat(), 6);
      Serial.print(F(","));
      Serial.print(gps.location.lng(), 6);
    }
    else
    {
      Serial.print(F("INVALID"));
    }
  
    Serial.print(F("  Date/Time: "));
    if (gps.date.isValid())
    {
      Serial.print(gps.date.month());
      Serial.print(F("/"));
      Serial.print(gps.date.day());
      Serial.print(F("/"));
      Serial.print(gps.date.year());
    }
    else
    {
      Serial.print(F("INVALID"));
    }
  
    Serial.print(F(" "));
    if (gps.time.isValid())
    {
      if (gps.time.hour() < 10) Serial.print(F("0"));
      Serial.print(gps.time.hour());
      Serial.print(F(":"));
      if (gps.time.minute() < 10) Serial.print(F("0"));
      Serial.print(gps.time.minute());
      Serial.print(F(":"));
      if (gps.time.second() < 10) Serial.print(F("0"));
      Serial.print(gps.time.second());
      Serial.print(F("."));
      if (gps.time.centisecond() < 10) Serial.print(F("0"));
      Serial.print(gps.time.centisecond());
    }
    else
    {
      Serial.print(F("INVALID"));
    }
  
    Serial.println();
  }

























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
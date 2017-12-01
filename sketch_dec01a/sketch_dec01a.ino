#include <Adafruit_GPS.h> 
#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 2);
Adafruit_GPS GPS(&mySerial);

String NMEA1;
String NMEA2;
char c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  GPS.begin(9600);
  GPS.sendCommand("$PGCMD,33,0*6D");
}

void loop() {
  // put your main code here, to run repeatedly:

}

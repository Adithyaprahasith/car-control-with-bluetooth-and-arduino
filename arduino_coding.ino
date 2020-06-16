#include <SoftwareSerial.h> 
SoftwareSerial mySerial(2, 3); //Set serial communication digital pin 2 for RX & digital pin 3 for TX
int channel1 = 4;
int channel2 = 5; 
int channel3 = 6;
int channel4 = 7; 
 void setup()
 {
 mySerial.begin(9600);

 pinMode(channel1, OUTPUT); 
 pinMode(channel2, OUTPUT); 
 pinMode(channel3, OUTPUT); 
 pinMode(channel4, OUTPUT); 
 // Relay 
 digitalWrite(channel1,HIGH); //Digital write state Pin 4 mode turn to HIGH
 digitalWrite(channel2,HIGH); //Digital write state Pin 5 mode turn to HIGH
 digitalWrite(channel3,HIGH); //Digital write state Pin 6 mode turn to HIGH
 digitalWrite(channel4,HIGH); //Digital write state Pin 7 mode turn to HIGH
 }
 void loop() 
{
 char Char_string = mySerial.read();
 //RELAY CHANNEL 1
 if(Char_string == 'A') //MCU reads char string = A set relay channel 1 turn to LOW
{
 digitalWrite(channel1,LOW); //Relay channel 1 turn LOW
}
if(Char_string == 'B') //MCU reads Char String = B set relay channel 1 turn to HIGH
{
 digitalWrite(channel1,HIGH); //Relay channel 1 turn HIGH
}
// RELAY CHANNEL 2
 if(Char_string == 'C') //MCU read char string = C set relay channel 2 turn to LOW
{
 digitalWrite(channel2,LOW); //Relay channel 2 turn LOW
}
if(Char_string == 'D') //MCU read char string = D set relay channel 2 turn to HIGH
{
 digitalWrite(channel2,HIGH); //Relay channel 2 turn HIGH
}
// RELAY CHANNEL 3
 if(Char_string == 'E') //MCU reads char string = E set relay channel 3 turn to LOW
{
 digitalWrite(channel3,LOW);//Relay channel 3 turn LOW
}
if(Char_string == 'F') //MCU reads char string = F set relay channel 3 turn to HIGH
{
 digitalWrite(channel3,HIGH);//Relay channel 3 turn HIGH
}
// RELAY CHANNEL 4
 if(Char_string == 'G') //MCU reads char string = G set relay channel 4 turn to LOW
{
 digitalWrite(channel4,LOW); //Relay channel 4 turn LOW
}
if(Char_string == 'H') //MCU read char string = H set relay channel 4 turn to HIGH
{
 digitalWrite(channel4,HIGH); //Relay channel 4 turn HIGH
}
 delay(10); //Delay @ 10 seconds
}

/***********************************************************************************************************
 * 
 * Author:    Aly Khan Nuruddin
 * Date:      May 11, 2021
 * Purpose:   This program permits the user to toggle the start and end states of an LED and to control its 
 *            brightness using virtually implemented widgets on 'Blynk', a hardware-agnostic IoT platform.
 *            
 ***********************************************************************************************************/
 
 #define BLYNK_PRINT DebugSerial         // Save space by toggling the print status of the Serial Monitor.

 #include <SoftwareSerial.h>             // Enable software functionality to communicate with multiple pins.

 SoftwareSerial DebugSerial(2, 3);       // Assign the Software Serial Pin, Rx, to Pin 2 and, Tx, to Pin 3.

 #include <BlynkSimpleStream.h>          // Enable communication with the Blynk Server over Cloud.
 #include "authentication.h"             // Import the 32-character authentication token for your project.

 void setup()
 {
   DebugSerial.begin(9600);              // Initiate communication with the Software Serial at 9600 baud.

   Serial.begin(9600);                   // Initiate communication with the Serial Monitor at 9600 baud. 
   Blynk.begin(Serial, auth);            // Actuate communication with the Blynk Server over Cloud.
 }

 void loop()
 {
   Blynk.run();                          // Maintain background communication with the Blynk Server over Cloud.
 }

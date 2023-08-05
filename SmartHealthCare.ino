#include <ESP8266WiFi.h>
#include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros
#include <Adafruit_AHT10.h>
char ssid[] = "Wifi_IoT"; // your network SSID (name)
char pass[] = "PRP108"; // your network password
int keyIndex = 0; // your network key Index number (needed only for WEP)
WiFiClient client;
Adafruit_AHT10 aht;
unsigned long myChannelNumber = 1941984;
const char * myWriteAPIKey = "4I38R7FCERM05M0M";
// Initialize our values
int BPM = 0;
int Temperature = 0;
int Humidity = 0;
String myStatus = "";
void setup() 
{
Serial.begin(115200); // Initialize serial
while (!Serial) 
{
; // wait for serial port to connect. Needed for Leonardo native USB port only
}
ThingSpeak.begin(client); // Initialize ThingSpeak
if (! aht.begin())
{
Serial.println("Could not find AHT10? Check wiring");
while (1) delay(10);
}
Serial.println("AHT10 found");
}
void init_wifi()
{
WiFi.mode(WIFI_STA);
if(WiFi.status() != WL_CONNECTED)
{
WiFi.begin(ssid, pass);
while (WiFi.status() != WL_CONNECTED)
{
delay(500);
Serial.print(".");
}
Serial.println("\nConnected.");
}
delay(1000);
}
void loop() 
{
init_wifi();
// set the fields with the values
ThingSpeak.setField(1, BPM);
ThingSpeak.setField(2, Temperature);
ThingSpeak.setField(3, Humidity);
sensors_event_t humidity, temp;
aht.getEvent(&humidity, &temp);
// set the status
ThingSpeak.setStatus(myStatus);
// write to the ThingSpeak channel
int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
if(x == 200)
{
Serial.println("Channel update successful.");
}
Else
{
Serial.println("Problem updating channel. HTTP error code " + String(x));
}
// change the values
BPM = bpm.beats_per_minute;
Temperature = temp.temperature ;
Humidity = humidity.relative_humidity ;
delay(20000); // Wait 20 seconds to update the channel again

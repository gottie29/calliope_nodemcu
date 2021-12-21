#include <SoftwareSerial.h>
//#define LED D0
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>


//SoftwareSerial mySerial(4, 5); // RX, TX
SoftwareSerial mySerial(3, 1); // RX, TX

//const uint16_t port = 8585;
//const char *host = "192.168.2.160";
//WiFiClient client;

void setup() {

  Serial.println("Start");
  Serial.begin(115200);
  
  // Check WiFi-Status
  //WiFi.mode(WIFI_STA);
  //WiFi.begin("ssid", "pwd"); // change it to your ussid and password
  //while (WiFi.status() != WL_CONNECTED)
  //{
  //      delay(500);
  //      Serial.print(".");
  //}

  // Open serial communications and wait for port to open:
  while (!Serial) {}
  // set the data rate for the SoftwareSerial port


}

void loop() { // run over and over
  if (Serial.available()) {
    Serial.write(Serial.read()); 
  }  

  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }

  /*if (!client.connect(host, port))
  {
    Serial.println("Connection to host failed");
    delay(1000);
    return;
  }
  Serial.println("Connected to server successful!");
  client.println("Hello From ESP8266");
  delay(250);
  while (client.available() > 0)
  {
    char c = client.read();
    Serial.write(c);
  }
  Serial.print('\n');
  client.stop();
  delay(5000);
*/
  
}
 

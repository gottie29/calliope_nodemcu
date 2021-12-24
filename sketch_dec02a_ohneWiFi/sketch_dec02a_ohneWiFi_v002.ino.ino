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

const char* ssid = "";
const char* password = "";
const char* host = "192.168.2.117"; //IP des Java-Servers
const int serverPort = 8585; //Port des Java-Servers (ServerSocket)

void setup() {

  Serial.println("Start");
  Serial.begin(115200);

  //Serial.println();
  //Serial.print("Versuche Verbindung zum AP mit der SSID=");
  //Serial.print(ssid);
  //Serial.println(" herzustellen");
  
  WiFi.begin(ssid, password);
  
  // Check WiFi-Status
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println();
  Serial.print("Verbunden mit IP ");
  Serial.println(WiFi.localIP());
  
  /*Signalstärke des AP*/
  long rssi = WiFi.RSSI();
  Serial.print("Signalstaerke(RSSI) des AP:");
  Serial.print(rssi);
  Serial.println(" dBm");

  // Open serial communications and wait for port to open:
  while (!Serial) {}
  // set the data rate for the SoftwareSerial port

}

void loop() { // run over and over

/*  long mydata = 0;

  if (Serial.available()) {
    Serial.println("Serial");
    mydata = Serial.read(); 
  }  
  
  if (mySerial.available()) {
    Serial.println("MySerial:");
    Serial.write(mySerial.read());
  }

  Serial.println(mydata, DEC);

  WiFiClient client;
  if (!client.connect(host, serverPort)) {
    Serial.print("X");
    return;
  }

  Serial.println();
  Serial.print("Verbunden mit ");
  Serial.println(host);
  Serial.print("Nachricht an RASPI senden: ");
  //Serial.println("Nachricht vom NodeMCU");
  //client.println("Nachricht vom NodeMCU");
  client.println(mydata);
  
  delay(1000);
  /*Echo vom Java-Server lesen und ausgeben*/
  //String line = client.readStringUntil('\n');
  //Serial.print(line);
  //Serial.println();
  /*Verbindung zum Java-Server schliessen*/
  Serial.println("Verbindung schliessen");
  client.flush();
  client.stop();
  Serial.println("Verbindung geschlossen");
*/
}
 

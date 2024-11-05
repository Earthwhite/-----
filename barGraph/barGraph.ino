#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Servo.h>

Servo myservo;

const char* ssid     = "a_2.4G";
const char* password = "12345678";

IPAddress staticIP(192,168,0,52);   // set gate IP = 192.168.1.51
IPAddress gateway(192,168,0,1);     // set gateway IP = 192.168.1.1
IPAddress subnet(255,255,255,0);

ESP8266WebServer server(80);

String Hello =
"<!DOCTYPE html>"
"<html>"
"<head>"
"    <title>Enter the password</title>"
"</head>"
"<body>"
"    <form action='/submit' method='post'>"
"        <!-- กล่องรับข้อความ -->"
"        <label for='name'>name:</label>"
"        <input type='text' id='name' name='name'><br><br>"
""
"        <!-- กล่องรับรหัสผ่าน -->"
"        <label for='password'>password:</label>"
"        <input type='password' id='password' name='password'><br><br>"
""
"        
""
"        <!-- Tap to submit-->"
"        <input type='submit' value='submit'>"
"    </form>"
"</body>"
"</html>"
;

String Sesame =
"<!DOCTYPE html>\n"
"<html>\n"
"  <head>\n"
"    <title>tp</title>\n"
"  </head>\n"
"  <body>\n"
"    <p style=\"text-align: center; font-size: 70px;\">correct password received</p>\n"
"  </body>\n"
"</html>\n"
;

void setup()
{
  Serial.begin(115200);

  myservo.attach(14);

  pinMode(5, OUTPUT);                     // GPIO5 (D1) as trigger to gate
    digitalWrite(5, LOW);                 // gate initially not triggered
  pinMode(2, OUTPUT);                     // GPIO2 as indicator
    digitalWrite(2, HIGH);                // active LOW

  WiFi.mode(WIFI_STA);

  WiFi.config(staticIP, gateway, subnet);             // set STA
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
    {
    delay(500);
    Serial.print(".");
    }
  Serial.println("!");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("local IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println(" ");

  server.on("/", []()                   // connection acknowledged
    {
    server.send(200, "text/html", Hello);
    Serial.println("password needed\n");
    }
  );

  server.on("/abcd", []()               // correct password entered
    {
    digitalWrite(5, HIGH);              // gate relay activated
    delay(200);
    digitalWrite(5, LOW);
    server.send(200, "text/HTML", Sesame);
    Serial.println("correct password\n");
      digitalWrite(2, LOW);             // indicator on (active LOW)
      delay(500);
      digitalWrite(2, HIGH);
      delay(1);

      myservo.write(0); // สั่งให้ Servo หมุนไปองศาที่ 0
      delay(1000); // หน่วงเวลา 1000ms
      myservo.write(180); // สั่งให้ Servo หมุนไปองศาที่ 180
      delay(1000); // หน่วงเวลา 1000ms
    }
  );

  server.begin();
  Serial.println("server started");
  Serial.println(" ");
  WiFi.printDiag(Serial);
}

void loop()
{
  server.handleClient();
}

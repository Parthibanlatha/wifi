#include<WiFi.h>
char SSID[]="Parthi";
char PASS[]="123456789";
void setup()
{
  Serial.begin(9600);
WiFi.mode(WIFI_STA);
WiFi.begin(SSID,PASS);

Serial.println("wifi connecting....");
Serial.print(WiFi.status());
while(WiFi.status()!=WL_CONNECTED)
{
  Serial.println(".");
  delay(100);
}
Serial.println("WiFi connected");
Serial.println(WiFi.localIP());
}

  //WiFi.begin("Parthi","123456789");

void loop()
{

}
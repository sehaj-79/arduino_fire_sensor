#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <FirebaseESP8266.h>

// Set these to run example.
#define FIREBASE_HOST "hackoverflow-2f96e-default-rtdb.firebaseio.com/Users/ODV4hKZzizYg71j2r30ZK6XSaSF2/Sensor%20List/1"
#define FIREBASE_AUTH "ppyrNZdnDuJMcrbaEutQudvb8qGnWnlzv3D9CNMn"
#define WIFI_SSID "Virus.exe"
#define WIFI_PASSWORD "whatever@9211"

void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;

void loop() {
 
  
int temp = getTemp();
  
  

Firebase.setString("Sensor_Status", "OFF");
fireStatus = Firebase.getString("Sensor_Status");

if (temp <= 500)
 {                              
Firebase.setString("Sensor_Status", "OFF");                            
 }
 else
 {
  Firebase.setString("Sensor_Status", "ON");
 }

//for (int i=1;i<100;i++){
//                    if (FIREBASE_HOST{
//                        String status = snapshot.child(""+i).child("Status").getValue().toString();
//                        if (status.equals("1")){
//                            Intent intent = new Intent(MainActivity.this,EmergencyActivity.class);
//                            startActivity(intent);
//                            break;
//                        }
//
//                    }
//
//                }


getTemp(){


  }
  
}

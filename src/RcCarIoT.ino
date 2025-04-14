#define BLYNK_TEMPLATE_ID "TMPL6IwzDojeQ"
#define BLYNK_TEMPLATE_NAME "RcCar IoT"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#define IN1 26
#define IN2 14
#define IN3 12
#define IN4 13

char ssid[] = "Imalda";
char pass[] = "04271908";
char auth[] = "oArUextrJOg1ldKBM98nxV_56I5lP_r4";

void setup() {
  Serial.begin(115200);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Blynk.begin(auth,ssid, pass);

}

void loop() {
  Blynk.run();

}

BLYNK_WRITE(V1){
  int value = param.asInt();
  if (value==1){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else{
    stopMotor();
  }
  

}

BLYNK_WRITE(V2){
  int value = param.asInt();
  if (value==1){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else{
    stopMotor();
  }
  

}

BLYNK_WRITE(V3){
  int value = param.asInt();
  if (value==1){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else{
    stopMotor();
  }
  

}

BLYNK_WRITE(V4){
  int value = param.asInt();
  if (value==1){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else{
    stopMotor();
  }
  

}

void stopMotor() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}




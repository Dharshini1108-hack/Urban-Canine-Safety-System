#include <BluetoothSerial.h>
#include <TinyGPS++.h>
#include <HardwareSerial.h>
#include "DHTesp.h"

/* ---------- Bluetooth ---------- */
BluetoothSerial SerialBT;

/* ---------- GPS ---------- */
TinyGPSPlus gps;
HardwareSerial gpsSerial(1);

/* ---------- DHT11 ---------- */
DHTesp dht;
int dhtPin = 17;

/* ---------- Ultrasonic ---------- */
#define ULTRASONIC_TRIG 5

/* ---------- Relay ---------- */
#define RELAY 23

/* ---------- Variables ---------- */
unsigned long previousMillis = 0;
unsigned long ultrasonicInterval = 3000;

float temperature;
float humidity;

void setup()
{
  Serial.begin(115200);

  SerialBT.begin("DOG_COLLAR");

  /* GPS only TX connected */
  gpsSerial.begin(9600, SERIAL_8N1, 16, -1);
  // GPS TX -> GPIO16
  // No RX pin

  dht.setup(dhtPin, DHTesp::DHT11);

  pinMode(ULTRASONIC_TRIG, OUTPUT);
  pinMode(RELAY, OUTPUT);

  digitalWrite(RELAY, LOW);
  digitalWrite(ULTRASONIC_TRIG, LOW);

  Serial.println("Dog Collar System Started");
  SerialBT.println("Dog Collar System Started");
}

void loop()
{
  /* ---------- GPS Reading ---------- */
  while (gpsSerial.available())
  {
    gps.encode(gpsSerial.read());
  }

  /* ---------- DHT11 ---------- */
  TempAndHumidity data = dht.getTempAndHumidity();

  if (dht.getStatus() == 0)
  {
    temperature = data.temperature;
    humidity = data.humidity;
  }
  else
  {
    SerialBT.println("*DHT ERROR#");
  }

  /* ---------- Temperature Alert ---------- */
  if (temperature > 40)
  {
    digitalWrite(RELAY, HIGH);
    SerialBT.println("*TEMP ALERT#");
  }
  else
  {
    digitalWrite(RELAY, LOW);
  }

  /* ---------- Ultrasonic Trigger ---------- */
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= ultrasonicInterval)
  {
    previousMillis = currentMillis;

    digitalWrite(ULTRASONIC_TRIG, HIGH);
    delayMicroseconds(20);
    digitalWrite(ULTRASONIC_TRIG, LOW);

    SerialBT.println("*ULTRASONIC TRIGGERED#");
  }

  /* ---------- GPS Send ---------- */
  if (gps.location.isUpdated())
  {
    SerialBT.print("*LAT:");
    SerialBT.print(gps.location.lat(), 6);
    SerialBT.print(",LON:");
    SerialBT.print(gps.location.lng(), 6);
    SerialBT.println("#");
  }

  /* ---------- Temp Send ---------- */
  SerialBT.print("*TEMP:");
  SerialBT.print(temperature);
  SerialBT.print(",HUM:");
  SerialBT.print(humidity);
  SerialBT.println("#");

  delay(2000);
}

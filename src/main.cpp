#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <Arduino.h>

// Define the pins that we will use
#define SENSOR 33
#define LED 26


void setup() {

  DHT dht(SENSOR, DHT11);
  pinMode(LED, OUTPUT);

}

void loop() {

  delay(5000);

  // Initialiser une variable pour stocker les résultats de la mesure
  float humidity, temperature;

  // Utiliser la bibliothèque DHT sensor pour lire les valeurs d'humidité et de température
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  // Afficher l'humidité relative avec un peu de formatage
  Serial.print("Humidité relative : ");
  Serial.print(humidity);
  Serial.println("%");

  // Afficher la température avec un peu de formatage
  Serial.print("Température : ");
  Serial.print(temperature);
  Serial.println("°C");

}
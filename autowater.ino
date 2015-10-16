/*

Flower Soil Mosture Sensor

D2 - Soil Mosture Sensor

D3 - Relay module

D4:D5 - LEDS 1,2

LED1 - Green

LED2 - Red

Connect the Soil Moisture Sensor to Digital input pin 2 and your 2 led's to digital out 4-5

*/

int moistureSensor = 2;

int relay = 3;

int led1 = 4;

int led2 = 5;

void setup()

{

// setting the led pins to outputs

pinMode(led1, OUTPUT);

pinMode(led2, OUTPUT);

// setting the Relay pin to output

pinMode(relay, OUTPUT);

// Serial Begin so we can see the data from the moisture sensor in our serial input window.

Serial.begin(9600); }

// the loop routine runs over and over again forever:

void loop()

{

// read the input on digital pin 2:

int sensorValue = digitalRead(moistureSensor);

// print out the value you read:

Serial.println(sensorValue);

digitalWrite(relay, HIGH);

digitalWrite(led1, LOW);

digitalWrite(led2, HIGH);

if (sensorValue == 1) {

digitalWrite(led1, HIGH);

digitalWrite(led2, LOW);

digitalWrite(relay, LOW);

Serial.println("Watering");

delay(10000);

// run pump for 10 seconds

Serial.println("Finished watering"); }

delay(1000);

// delay 1 second between reads

}

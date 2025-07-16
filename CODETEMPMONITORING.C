#define TEMP_SENSOR_PIN A0  // LM35 output connected to A0

float temperatureC;

void setup() {
    Serial.begin(9600);  // Start serial communication at 9600 baud
}

void loop() {
    int sensorValue = analogRead(TEMP_SENSOR_PIN); // Read raw analog value (0–1023)
    
    // Convert analog value to voltage (assuming 5V reference)
    float voltage = sensorValue * (5.0 / 1023.0);
    
    // Convert voltage to temperature in Celsius (LM35 gives 10mV/°C)
    temperatureC = voltage * 100;

    // Print temperature
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.println(" °C");

    delay(1000); // Wait 1 second before next reading
}

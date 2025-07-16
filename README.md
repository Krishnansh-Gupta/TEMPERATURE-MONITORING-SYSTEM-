# TEMPERATURE-MONITORING-SYSTEM-
*COMPANY*:CODTECH IT SOLUTION 
*NAME*: KRISHNANSH GUPTA 
*INTERN ID*:CT06DF1918 
*DOMAIN*:EMBEDDED SYSTEM 
*DURATION*:6 WEEKS 
*MENTOR*: NEELA SANTOSH
*DESCRIPTION*-TEMPERATURE MONITORING SYSTEM -A temperature monitoring system is an electronic system designed to measure and track temperature over time. These systems are essential in various applications, including industrial automation, environmental monitoring, healthcare, agriculture, and home automation. The primary purpose of such a system is to ensure that the temperature remains within safe or optimal limits and to alert users if it deviates beyond the acceptable range.
The basic components of a temperature monitoring system include a temperature sensor, a microcontroller or processor, a display or communication interface, and sometimes alert mechanisms like buzzers or LEDs. One of the most commonly used temperature sensors in simple systems is the LM35, which provides a linear output voltage directly proportional to the temperature in Celsius. More advanced systems may use digital sensors like DHT11, DHT22, or DS18B20, which offer better accuracy and built-in digital communication.
The working principle involves the temperature sensor detecting the surrounding ambient temperature and converting it into an electrical signal. In analog sensors like the LM35, this signal is a voltage that varies linearly with temperature. This voltage is then read by an analog-to-digital converter (ADC) in the microcontroller. The digital value obtained is processed to calculate the actual temperature using a predefined formula based on the sensor's characteristics. The temperature is then either displayed on an LCD screen, sent to a serial monitor, or transmitted wirelessly for remote monitoring.
For example, in an Arduino-based system using the LM35 sensor, the analog output of the sensor is connected to one of the Arduino's analog input pins. The Arduino reads the analog value, converts it to a voltage, and then to a temperature value using the formula:
Temperature (°C) = (Analog value × 5.0 × 100) / 1023Some systems are designed to trigger automatic responses when the temperature crosses a certain threshold. For instance, if the temperature exceeds a preset value, the system may activate a fan, sound an alarm, or send a notification via Bluetooth or Wi-Fi. This makes temperature monitoring systems vital for preventive maintenance and safety control in temperature-sensitive environments.
Bluetooth or Wi-Fi-enabled systems allow remote monitoring, which is especially useful in cold storage facilities, greenhouses, or server rooms. With mobile applications or web interfaces, users can receive real-time temperature data, view trends, and even control appliances remotely.
Applications
Industrial: Monitoring machines, boilers, and manufacturing environments.
Medical: Maintaining required temperatures in refrigerators storing vaccines or medicines.
Agriculture: Controlling greenhouse temperatures.
Home Automation: Smart thermostats and HVAC control.
Food Industry: Ensuring food is stored or cooked at safe temperatures.
Conclusion
In summary, a temperature monitoring system is a practical and essential tool for measuring and managing temperature in various environments. With the integration of microcontrollers and sensors, it provides accurate readings, helps in automation, and ensures safety and efficiency. Whether it’s a simple system for hobbyists or a complex one for industrial use, temperature monitoring systems play a crucial role in modern technology.
*OUTPUT- 
<img width="485" height="283" alt="Image" src="https://github.com/user-attachments/assets/2cfe8e0a-1f73-409e-8f34-3697f81b7077" />


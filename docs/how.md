<!---layout: page
title: "How?"
permalink: /how/--->

<h2> How? </h2>
My Example project uses two sets of sensors, <a href="https://jezrileyfrench.co.uk/hydrophones.php"> a Jez Riley french D-Series Hydrophone </a> and a <a href="https://abra-electronics.com/sensors/sensors-temperature-en/dht22-temperature-humidity-sensor.html"> DHT22 Humidity & Temperature Sensor </a> connected to Max via an Arduino Uno. In Max the data is converted to OSC, which I use to send to data to Reaper.

In the github, I have included a basic patch to get the sensor data into Max, and then converted to more general OSC data, to serve as a jumping off point for building your own mappings with just the sensor.

<a href="https://github.com/adafruit/DHT-sensor-library"> As I use the DHT family of sensors, my arduino code makes use of the Arduino DHT library from Adafruit, which you can download here. </a>

<h2> Why Use My Patches?</h2>
I've created some utility functions to help get more "expressive" data in regards to boiling water, which can be easily adapted to any situation where positives trends in humidity & temperature over time are needed to be mapped to A/V applications. These require positive trends as I have provided a "self calibration" utility in the Max patches, where it will recalibrate if a temperature lower than it's calibration value is detected, providing the max patches with the largest data range to calculate relative sensor saturation for it's ambient environment. While I use the DHT22 as it can safely reach & sustain much higher temperature values, I've included code for the DHT11 as well.

The OSC mapping used in the Max patch system is also general enough that a sensor change should only need you to change the arduino code.

<h2>Why did you decide on these sensors?</h2>
I wanted to have sensors that would be easily mountable inside of the kettle, could be exposed to high temperature & humidity values, had as little exposed electronics as possible, and were relatively cheap & easy to find. I settled on the DHT22 <a href="https://forum.arduino.cc/index.php?topic=432544.0"> though I did</a> <a href="https://www.letscontrolit.com/forum/viewtopic.php?t=1582"> find ample </a> <a href="https://www.reddit.com/r/arduino/comments/9ftsg7/dht22_strange_humidity_numbers/"> evidence online </a> that these DHT sensors are generally unreliable and in accurate, I seem to have lucked out here. Your mileage may vary.

 <a href="https://kaseypocius.github.io/MUMT306-MagicMappedKettle/about"> Back to the About</a>

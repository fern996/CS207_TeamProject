# CS207_TeamProject


ArduinoHmGoBot(Arduino-Home-made-Go-Robot) 
===================

About this project
===========

Wouldn't it be great if we are able to build a robotic arm that’s controlled wirelessly at home? If you think that’s great, then what do you think about a mobile robotic arm? This is how the ArduinoHmGoBot was created. The ArduinoHmGoBot is an amalgamation of a toy truck and a homebuilt Robotic Arm, that is controlled using an Android Bluetooth device on an Arduino platform.                               

![alt text][pic1]

[pic1]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Left.jpeg?raw=true																			
 	The idea for the project is to incorporate separate systems to create one system as a whole that is functional. Three systems are combined to make ArduinoHmGoBot (1) The remote-controlled truck (2) the robotic arm and (3) the lighting system. All system processing is managed by an Arduino, with different dedicated coprocessors used to handle specific components in each system.                        
	While others have made similar projects as we have, our projects include different designs, such as counterweights in the shoulder to provide extra lifting force in the arm. Cardboard the main material used to make the ArduinoHmGoBot arm.


Repository Contents
============
* **/src** 
* **/hardware** 
* **/Building Process**
* **/libraries** 
* **/img** 
* **/LICENSE** 
* **/README.md** 

Requirements and Materials
============

Dependencies:
* Arduino 1.8.6 https://www.arduino.cc/en/Main/Software
* Eagle Roboticshttps https://play.google.com/store/apps/details?id=appinventor.ai_Eaglerobotics86.RoboticArm
* Adafruit_Python_PCA9685 https://learn.adafruit.com/adafruit-16-channel-servo-driver-with-raspberry-pi/using-the-adafruit-library
* Facchinm “Arduino-libraries/Stepper” from github.com https://github.com/arduino-libraries/Stepper

Bill of Materials:
* old rc truck/car
* card board
* old plastic bottle
* two cd
* real (cylindrical hollow object)
* glue sticks
* 21 X AA batteries 
* 3 X battery holder (12v, 7v, 6v)
* jumper cables
* 2 X SG90 servo motors
* 1 DS3218MG DSservo
* 1 28byj-48 stepper motor
* 1 ULN2003 stepper motor driver 
* 1 X L298N motor driver
* 1 x HC-06 Bluetooth module
* 1 x servo driver (PCA 9685 16 channel pmw servo)
* 2 similar gear 1.5cm diameter 
* 1 medium and 1 small geras used for the shoulder
* Arduino UNO
* Solderless Plug-in Breadboard

Equipment:
* glue gun
* screw drivers
* knife
* scissor
* nipper
* drill machine and drill bits

Team
============

The build team consited of:

* Raju Chatelall
* Shawn Fernandes

Raju Chatelall did the research for building the robotic arm and coding the robotic arm, car and lighting system. Shawn Fernandes major contribution towards the project were the researches done for building and coding the car. The design for constructing the lighting system was done by both partners.

Credits
=============

* Trevor Tomesh: Guidance and support
* Anusha: Robotic arm prototype, https://www.electronicshub.org/robotic-arm/

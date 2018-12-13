# CS207_TeamProject


ArduinoHmGoBot(Arduino-Home-made-Go-Robot) 
=============

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
* MeArm Controller https://play.google.com/store/apps/details?id=appinventor.ai_Muhandi_prasetyo.MeArm&hl=en_US
* Adafruit_Python_PCA9685 https://learn.adafruit.com/adafruit-16-channel-servo-driver-with-raspberry-pi/using-the-adafruit-library

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

Build Instrucitons
==================


1) **Building the remote-controlled truck:**
 The shell for the truck was removed using a Philip head screwdriver along with the circuit board. Jumper cables were connected to the battery pack on the truck. The 12V battery pack was glued on to the back of the truck frame. The wires for the dc motors and the battery packs were all stripped and fixed into position onto the L298N motor driver using a screwdriver. The L298n driver was then glued onto the top of the back-dc motor. The Arduino board was then glued onto the truck frame after which jumper cables were connected to all the pins on the Arduino. Connections for the Arduino and the L298N driver were then made using the jumper cables connected to the Arduino. 

![alt text][pic2]

[pic2]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/motor%20driver%20set%20up(cropped).png?raw=true
The 12 inches by 6 inches cardboard platform is cut out using a knife and a ruler. A portion of the cardboard above the Arduino is been removed to gain access to the jumper wires connected to the Arduino and battery terminal. After passing the wire through the cardboard, it is then glued to the frame of the truck. The breadboard is glued to the cardboard above the rear wheel. Connections for the piezo buzzer is this be made along with the Bluetooth module onto the breadboard. 

2) **The build process for the robotic arm in its initial phase:**

**Base**: A template of the inner circle for the duct tape real was drawn and cut out using a knife, this process was repeated three times. The pieces were then glued to together and placed into the real level to one end. A template of the inner portion of the real was also removed from the center of the DVD and it was then pasted onto the rim using hot glue. The lever for the SG90 servo motor is glued onto the center of the second DVD. The servo was then attached to the lever with a screw using a screwdriver.  Glue was placed onto the bottom of the SG90 servo then the assembly was placed into the real, making sure that the DVD glued to the rim and the DVD on the servo are in perfect alignment. 

![alt text][pic3]

[pic3]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/base.png?raw=true																				
**Shoulder Support:** Three pieces of cardboard and one piece of plastic each with dimensions 3 inches by 2 inches were cut out using a knife. After gluing the pieces together with the plastic on the outer ends, a rectangular portion the size of the servo is removed. After which the servo was placed into the opening and secured with glue. Before gluing the piece onto the base. The base servo was turned all the way to the right.

![alt text][pic4]

[pic4]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/shoulder%20support.png?raw=true

**Shoulder:** two pieces of cardboard and two pieces of plastic of dimensions 5 inches by 1-inch were cut out using a knife. After sandwiching the pieces together with the plastics on the outer end using the drill place one hole 0.5 inches from ends in the shoulder. A servo lever is glued lining up with the holes on the shoulder. At this point, the servo on the shoulder support is turned all the way back and the shoulder is then fixed onto the servo and secured with a screw forming a 90 degrees angle with the base.
Elbow - two pieces of cardboard and two pieces of plastic with dimensions 8.5 inches by 2.5 inches were cut out. After gluing the pieces together using a knife a rectangular portion the size of the servo motor case from one end of the elbow was removed. The servo is then inserted and secured using hot glue.

**Gripper:** two pieces of Corrugated plastic boards are cut out in dimensions 3 inches by 1.5 inches using a knife. An opening is made in one piece of the board as showing in Appendix I for the servo shaft to pass through. Two claws are hand drawn on papers using ideas from Diyushar “How To Make Electric ARM Robot at Home” from blogspot.com [11]. The templates are paste onto the stiff plastic and cut out using scissors. The claws are then drawn onto the foam and cut out and secured together using hot glue. On the plastic ends of the claws, the two plastic gears are hot glued onto them and holes were drilled using the drilling machine in the center of the gears. The servo was then placed in the opening made on the corrugated plastic board and secured with hot glue. A picture with these components can be view in Appendix I. With the servo set at an angle zero degrees, a claw is secured onto the servo using a screw. The second claw is lined up with the gears gripping each other and a steel shaft is passed through the centre of the gear making a hole into the corrugated plastic. The second piece of corrugated plastic board is fixed onto of the assembly and secured from back using hot glue and strips of corrugated plastic board. The End result of gripper can be view in Appendix H.
A picture of the complete build in the initial face for the arm can be view in Appendix H

**The first rebuild phase.** 
After the initial construction of the arm was completed and tested, it was evident that the structure was too heavy for the shoulder SG90 servo. To overcome this setback, a layer of cardboard was removed from the shoulder and elbow. In addition to the aforementioned, the width of the elbow was reduced by 0.25 inch on both sides. This reduction was not done around the servo.


**The second rebuild phase**
In this phase, using a servo to rotate the shoulder was taken out and replaced with a stepper motor. The shoulder support is now reconstructed into two pieces with the piece on the right housing the stepper motor since the majority of the arm weight is on the right. Two plastic gears were also installed. With the small one attached to the stepper motor and the larger one attached to the shoulder and shoulder shaft. Making the opening on the shoulder support was done by lining the larger gear up with the smaller gear and marking the center with a pencil. It was then drilled. 
After assembling the new system. It was still not sufficient enough for lifting the arm.
Counterweight was added onto a 5 inches extension onto the shoulder. The SG90 servo on the elbow was replaced by a DS3218MG DSservo. After the modification, the arm was now able to rotate and lift objects in an outstretched position. Pictures of the rebuild can be view in Appendix L.

3) **Lighting system:**
The lighten system was fairly simple to construct and install. The 4-white led in the front were installed using A 6 inches by 1-inch cardboard. A piece of foil was used to cover the cardboard with the shiny side facing the outer side. Four pairs of holes were drilled using a drill machine evenly spaced for the led legs to pass through. The led were secured to the cardboard using hot glue. The cathode of all four led was connected to a command jumper cable and connected to the ground on the breadboard. While the Anodes were all separately connected jumper wires and to the shift register. The two lights on the sides were each placed on a 1 inch by 1-inch piece of cardboard with foil. The same procedure followed for connecting the front lights were followed for connecting the sidelights. The backlights and brake lights were mounted onto cardboard cover with a red-light shade and glued onto the back of the truck on both sides. While the front, side, and backlights were connected to the shift register the brake lights were connected to pins A1 and A2.

**Putting the system together and uploading the code:**
The PC9685 servo module is glued to the outer lift side of the duct tape real. The electrical components for the servo driver are powered by the Arduino connected to the breadboard. The battery pack for the PC9685 is glued to the underside of the truck. The ULN2003 stepper motor driver is glued onto the back of the duct tape real. The IN1 to IN4 pins are connected directly to the Arduino and is powered off the breadboard pins connected to the truck’s battery pack which also powers the Arduino.  A picture showing the new circuit design for the robotic arm can be view in Appendix J and Appendix K.
The shift registers and led are also connected on the breadboard along with the photoresistor. The Bluetooth module used for connection to the android device was also connected to the breadboard. The piezo buzzer is connected to the breadboard. 
After the final build was completed for the remote-controlled truck, the remote-controlled arm, and the lighting system. The arm was glued onto the truck. For stronger grip sponge was added to the inner rim of the claws. For presentation, the cardboard enclosure for the breadboard was added along with an operator’s seat. The Bluetooth module and photoresistor was moved from the breadboard onto the top of the enclosure.  Pictures of the final build can be view in Appendix MA, Appendix MB and Appendix MC.




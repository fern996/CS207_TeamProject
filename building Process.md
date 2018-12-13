
Build Instructions
==================

Circuit designs for the Proect
============================

* **Motor Driver Circuit:**

![alt text][pic1]

[pic1]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/motor%20driver%20set%20up(cropped).png?raw=true

* **Servo Circuit:**

![alt text][pic2]

[pic2]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Servo%20and%20Pca9685%20setup(cropped).png?raw=true

* **Bluetooth Circuit:**

![alt text][pic3]

[pic3]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/HC06%20bluetooth%20and%20arduino%20power%20circuit(cropped0.png?raw=true

* **Stepper Motor Circuit:**

![alt text][pic4]

[pic4]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/StepperMotor%20circuit.png?raw=true

* **Lighting System Circuit:**

![alt text][pic5]

[pic5]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Lighting%20system%20circuit.png?raw=true



Rc truck:
=========
The shell for the truck was removed using a Philip head screw driver along with the circuit board. Jumper 
cables were connected to the battery pack on the truck. The 12V battery pack was glued on to the back of 
the truck frame. The wires for the dc motors and the battery packs were all stripped and fixed into position 
onto the L298N motor driver using a screw driver. The L298n driver were then glued onto the top of the back-dc motor.
The Arduino board was the glued onto the truck frame after which jumper cables were connected to all the pins on the 
Arduino. Connections for the Arduino and the L298N driver were then made using the jumper cables connected to the Arduino. 

![alt text][pic6]

[pic6]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Rc%20truck.jpeg?raw=true

The 12 inches by 6 inches cardboard platform is cut out using a knife and a ruler. A portion of the cardboard above the 
Arduino is been removed to gain access to the jumper wires connected to the Arduino and battery terminal. After passing the
wire through the cardboard, it is then glued to the frame of the truck. The breadboard is glued to the cardboard above the rear
wheel. Connections for the piezo buzzer is this be made along with the Bluetooth module onto the breadboard. 


The build process for the robotic arm:
======================================

Base: a template of the inner circle for the duct tape real was drawn and cut out using a knife, this process was repeated three 
times. The pieces were then glued to together and placed into the real level to one end. A template of the inner potion of the real 
was also removed from the center of the DVD and it was then paste onto the rim using hot glue. The lever for the SG90 servo motor 
is glued onto the center of the second DVD. The servo was then attached to the lever with a screw using a screwdriver.  Glue was 
placed onto the bottom of the SG90 servo then the assembly was placed into the real, making sure that the DVD glued to the rim and
the DVD on the servo are in perfect alignment. 

![alt text][pic7]

[pic7]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/base.png?raw=true
shoulder and shoulder support: one piece card board and two pieces of plastic of dimensions 10 inches by 1-inch were cut out 
using a knife. After sandwiching the pieces together with the plastics on the outer end using the drill place one hole 0.5 inches 
from one end in the shoulder. A servo lever is glued lining up with the hole on the shoulder. A second hole is drilled in the centre 
for passing the axle through. Using hot glue secure the medium gear and axle to the shoulder. 
For the shoulder support four pieces of card board and 2 pieces of plastic dimentions 3 inches by 1.5 inches are needed. Using hot 
glue to stick the piece together  2 piece of card board and 1 piece of plastic for oneside. Mid way in one of the assembled pieces
make an opening the shape of the stepper motor. Insert the stepper motor for the plastic end. Place the small gear onto the stepper 
motor.  make and opening for the axle above the stepper motor keeping the gears in contact. Align the two peices and drill through 
the second shoulder suport assemble. Follow the picture below for guidance.

![alt text][pic8]

[pic8]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/arm%20stretch.jpeg?raw=true
Elbow - one piece of card board and two pieces of plastic with dimensions 8.5 inches by 2.5 inches were cut out. After gluing the pieces 
together using a knife a rectangular portion the size of the servo motor case from one end of the elbow was removed. The servo is then 
inserted and secured using hot glue.

Gripper- two pieces of Corrugated plastic boards are cut out in dimensions 3 inches by 1.5 inches using a knife. An opening is made in
one piece of the board as showing in Appendix I for the servo shaft to pass through. Two claws are hand drawn on papers using ideas from
Diyushar “How To Make Electric ARM Robot at Home” from blogspot.com [1]. The templates are paste onto the stiff plastic and cut out 
using a scissors. The claws are then drawn onto the foam and cut out and secured together using hot glue. On the plastic ends of the 
claws the two plastic gears are hot glued onto them and holes were drilled using the drilling machine in the centre of the gears. The 
servo was then placed in the opening made on the corrugated plastic board and secured with hot glue. A picture with these components 
can be view in Appendix I. With the servo set at an angel zero degrees, a claw is secured onto the servo using a screw. The second
claw is lined up with the gears gripping each other and a steel shaft is passed through the centre of the gear making a hole into the 
corrugated plastic. The second piece of corrugated plastic board is fixed onto of the assembly and secured from back using hot glue and 
strips of corrugated plastic board. 

![alt text][pic9]

[pic9]:https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Claw.jpeg?raw=true

 Lighting system
 ===========
The lighting system was fairly simple to construct and install. The 4-white led in the front were installed using A 6 inches by 1-inch cardboard. A piece of foil was used to cover the cardboard with the shiny side facing the outer side. Four pairs of holes were drilled using a drill machine evenly spaced for the led legs to pass through. The led were secured to the card board using hot glue. The cathode of all four led were connected to a command jumper cable and connected to the ground on the breadboard. While the Anodes were all separately connected jumper wires and to the shift register. The two lights on the sides were each placed on a 1 inch by 1-inch piece of card board with foil. The same procedure followed for connecting the front lights were followed for connecting the sidelights. The backlights and break lights were mounted onto cardboard cover with a red-light shade and glued onto the back of the truck on both sides. While the front, side and backlights were connected to the shift register the break lights were connected to pins A1 and A2.


Putting the system together and uploading the code
==============================
The PC9685 servo module is glued to the outer lift side of the duct tape real. The electrical components for the servo driver is power by the Arduino connected to the breadboard. The battery pack for the PC9685 is glued to the underside of the truck. The ULN2003 stepper motor driver is glued onto the back of the duct tape real. The IN1 to IN4 pins are connected directly to the Arduino and is powered of the bread board pins connected to the truck’s battery pack which also powers the Arduino.  
The shift registers and led are also connected on the bread board along with the photoresistor. The Bluetooth module used for connection to the android device was also connected to the bread board. The piezo buzzer is connected to the bread board. 
After the final build was completed for the remote-controlled truck, the remote-controlled arm and the lighten system. The arm was glued onto the truck. For stronger grip sponge was added to the inner rim of the claws. For presentation, the cardboard enclosure for the breadboard was added along with an operator’s seat. The Bluetooth module and photoresistor was moved from the breadboard onto the top of the enclosure. 
A link to the code used for the ArduinoHmGoBot can be found in Appendix N. A user would also need to download two libraries. One for PC9685 servo driver taken from (use this link for referencing https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library) and The ULN2003 stepper motor driver library taken from Facchinm “arduino-libraries/Stepper” from github.com [2]. Before uploading the code to the Arduino disconnect the Bluetooth module (The Rx and Tx pins are used to program the Arduino). The Android application used for controlling the ArduinoHmGoBot can be downloaded from Eagle Robotics “Robotic Arm Bluetooth Arduino” from play.google.com[3].





![alt text][pic10]

[pic10]: https://github.com/sf0912/CS207_TeamProject/blob/Sf0912-2/img/Left.jpeg?raw=true


References
================
[1] Diyushar (December 3, 2017) How To Make Electric ARM Robot at Home, Retrieved December 1st,2018, from 	
http://diyushar.blogspot.com/2017/12/how-to-make-electric-arm-robot-at-home.html

[2] Facchinm(Mar 8, 2016) “Arduino-libraries/Stepper” Retrieved December 3rd, 2018, from 
https://github.com/arduino-libraries/Stepper

[3] Eagle Robotics (February 25, 2017) Robotic Arm Bluetooth Arduino (version 1.0) [mobile application], from
https://play.google.com/store/apps/details?id=appinventor.ai_Eaglerobotics86.RoboticArm


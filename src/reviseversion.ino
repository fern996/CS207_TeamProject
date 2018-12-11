/* Author: raju Chatelall
 *  date: November 20th 2018
 * project's name: ArduinoHmGoBot
 * version: (V 1.0)
 * avaiable on: https://github.com/sf0912/CS207_TeamProject
 * 
 * The code is written using modified version of
 *   Title: Bluetooth_arduino_car
*    Author: Vasilakis Michalis
*    Date: 12-12-2014
*    Code version: ver.1
*    Availability: http://www.ardumotive.com/arduino-car
*    
*    to control the a remote control truck and robotic arm using an android appilcatong through bluetooth connectivity from
*    Eagle Robotics “Robotic Arm Bluetooth Arduino” from play.google.comEagle Robotics “Robotic Arm Bluetooth Arduino” from play.google.com.
*    The it activates lights connecting to a shift register controlled by a photoresistor.
*    More information at https://github.com/rajuRapc
*    
 *  
 *  
 */



#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include "Stepper.h"

#define STEPS  32

/*-----( Declare objects )-----*/
// Setup of proper sequencing for Motor Driver Pins
// In1, In2, In3, In4 in the sequence 4-6-2-7

Stepper small_stepper(STEPS, 4,6,2,7);


// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//Buzzer / Speaker to Arduino UNO Pin 3
  const int buzzer = 3 ;  
  unsigned long tonePreviousMillis = 0;        // will store last time tone was updated
  int toneState = 0;

//PCA9685 
//pin 0 baseservo
//pin 1 shoulder servo
//pin 2 clawservo


//L293 Connection   
  const int motorA1  = 9;  // Pin  2 of L293
  const int motorA2  = 10;  // Pin  7 of L293
  const int motorB1  = 11; // Pin 10 of L293
  const int motorB2  = 12;  // Pin 14 of L293



//Pin Definitions
//The 74HC595 uses a serial communication 
//link which has three pins
int data = 13; 
int clock = 5;
int latch = 8;

int lightPin = 3;
int reverseLightPin1 = A2;
int reverseLightPin2 = A1;
int registerState = 255; //registerState 255 turns all lights connected to register on and set a value for initial start up


  

//servo initial start up values
int baseServo = 320;

int elbowServo = 498;
int gripperServo  =  480;

//Leds connected to Arduino UNO Pin 12
  const int lights  = 12;

  //delaytime for arm movement
  int Utime = 7;


// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)

  

void setup() {
  Serial.begin(9600);

 //setup pins for reverse lights
   pinMode(reverseLightPin1, OUTPUT);  
  pinMode(reverseLightPin1, OUTPUT);  


  //setup pins for the shift register
  pinMode(data, OUTPUT);
  pinMode(clock, OUTPUT);  
  pinMode(latch, OUTPUT);  

  //setup the pins for the motor driver
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);

//start setup for the PCA9685 pins

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  pwm.setPWM(0, 0, baseServo);

   delay(5000);
   pwm.setPWM(1, 0,  gripperServo);
   delay(300);
   pwm.setPWM(2, 0, elbowServo);
   delay(5000);


  

  delay(10);
}

char state;

void loop() 
{

 //Save income data to variable 'state'
    if(Serial.available() > 0){     
      state = Serial.read();   
    }


//gets the resing from the photoresistor
int reading  = analogRead(lightPin);
  

//if reading is less than 20 turns lights on
  if(reading < 10)
  {
      unsigned long currentMillis = millis();//sets the current seconds

  if (currentMillis - previousMillis >= interval) //compares the time elapsed to the ste time interval
  {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (registerState == 255) 
    {
      registerState = 252;
    }
    else
{
      registerState = 255;
    }
  }
  

    
   updateLEDs(registerState);
  }
  
  else
  {
    updateLEDs(0);
  }



/***************************************************************************************
*    Title: Bluetooth_arduino_car
*    Author: Vasilakis Michalis
*    Date: 12-12-2014
*    Code version: ver.1
*    Availability: http://www.ardumotive.com/arduino-car
*
***************************************************************************************/

    

    //If state is equal with letter 'G', car will go backward
    if (state == 'G') {
      digitalWrite(motorA1, HIGH);  digitalWrite(motorA2, 0);  
        digitalWrite(motorB1,0);     digitalWrite(motorB2, 0); 
        unsigned long toneCurrentMillis = millis();

  if (toneCurrentMillis - tonePreviousMillis >= interval/2)
  {
    // save the last time you blinked the LED
    tonePreviousMillis = toneCurrentMillis;
    

    // if the LED is off turn it on and vice-versa:
    if (toneState == 0) 
    {
       tone(buzzer, 1000);//Speaker on 
       toneState = 1;
    } 
    else 
    {
      noTone(buzzer);//Speaker on 
       toneState = 0;
    }
        
         digitalWrite(reverseLightPin2,1);
         digitalWrite(reverseLightPin1,1);
    }
    }



  //If state is equal with letter 'H', car will go foward
    else if (state == 'H') {
      digitalWrite(motorA1, 0);  digitalWrite(motorA2, HIGH);  
        digitalWrite(motorB1,0);     digitalWrite(motorB2, 0); 
    }  

    //If state is equal with letter 'I', car will go left and foward
    else if (state == 'I') {
       digitalWrite(motorA1, 0); digitalWrite(motorA2, 1);  
        digitalWrite(motorB1,0);     digitalWrite(motorB2, 1); 
    }
    //If state is equal with letter 'J', car will go right and forward
    else if (state == 'J') {
      digitalWrite(motorA1,0);  digitalWrite(motorA2, 1);  
        digitalWrite(motorB1,1);     digitalWrite(motorB2, 0); 
    }


    //If state is equal with letter 'B' base swings right
     if (state == 'B' &&  baseServo < 540) 
    {
      baseServo++;
      pwm.setPWM(0, 0, baseServo);
      delay(Utime);
     
    }
     //If state is equal with letter 'A' base swings LEft
    else if (state == 'A' &&  baseServo > 150) 
    {
      baseServo--;
      pwm.setPWM(0, 0, baseServo);
      delay(Utime);
     
    }

    //If state is equal with letter 'D' lower shoulder 
    else if (state == 'D' ) 
    {
        small_stepper.setSpeed(500); //Max seems to be 500
                    
                      small_stepper.step(1);
                      delay(1); 
     
    }
    //If state is equal with letter 'C'  raise shoulder 
    else if (state == 'C' )
    {
      small_stepper.setSpeed(500); //Max seems to be 500
                    
                      small_stepper.step(-1);
                      delay(1); 
     
    }


//If state is equal with letter 'e'  riases elbow
    else if (state == 'F' && elbowServo > 120) 
    {
      elbowServo--;
      pwm.setPWM(2, 0, elbowServo);
      delay(Utime);
     
    }
    //If state is equal with letter 'E'  lower elbow
    else if (state == 'E' && elbowServo < 498) 
    {
      elbowServo++;
      pwm.setPWM(2, 0, elbowServo);
      delay(Utime);
      
    }
    

    //If state is equal with letter 'g'  loosen grip
    else if (state == 'L' && gripperServo > 300) 
    {
      gripperServo--;
      pwm.setPWM(1, 0,   gripperServo);
      delay(Utime);
     
    }
    //If state is equal with letter 'g'  loosen grip
    else if (state == 'K' && gripperServo < 535) 
    {
      gripperServo++;
      pwm.setPWM(1, 0,   gripperServo);
      delay(Utime);
     
    }
      
       //If state is equal with letter 'S', stop the car
       //sets pins states to zero.
    else if (state == 'S')
   {
        analogWrite(motorA1, 0);  analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);  analogWrite(motorB2, 0);
         noTone(buzzer); 
         digitalWrite(reverseLightPin1,0);
         digitalWrite(reverseLightPin2,0);
         toneState = 0;
       
   }
    
    
}




/*******************************************************************************************************
 * updateLEDs() - sends the LED states set in ledStates to the 74HC595
 * sequence
 * taken from cs207 lab
 *     ---------------------------------------------------------
 *     |  Arduino Experimentation Kit Example Code             |
 *     |  CIRC-05 .: 8 More LEDs :. (74HC595 Shift Register)   |
 *     ---------------------------------------------------------
 *     http://www.cs.uregina.ca/Links/class-info/207/Lab8/
 ********************************************************************************************************/
void updateLEDs(int value){
  digitalWrite(latch, LOW);     //Pulls the chips latch low
  shiftOut(data, clock, MSBFIRST, value); //Shifts out the 8 bits to the shift register
  digitalWrite(latch, HIGH);   //Pulls the latch high displaying the data
}
//********************************************************************************************************

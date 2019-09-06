# IDD-Fa18-Lab1: Blink!

**A lab report by Konstantinos Karras Kallidromitis**

## Part A. Set Up a Breadboard

[insert a photo of your breadboard setup here]


## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?** A 100 Ohm resistor has Brown, Black, Brown, and the color of the tolerance (eg. Gold). 
 
**b. What do you have to do to light your LED?** Connect it to the Computer, and press the switch. 


## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?** To make the on board LED blink you have to add the code "pinMode(LED_BUILTIN, OUTPUT);" inside the "void setup()" function to initize the bultin LED as the output. Then in the "void loop" function include the commands "digitalWrite(LED_BUILTIN, HIGH);" and "digitalWrite(LED_BUILTIN, LOW);" to turn the LED on and off respectively. [Code c1a](https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/c1a.ino)

**b. What line(s) of code do you need to change to change the rate of blinking?** The rate of blinking depends on the delay function. The function takes as input a number in milliseconds (1000 ms = 1 s) and pauses the code for the specified amount. By varying the delay different blinking speeds can be achieved.

**c. What circuit element would you want to add to protect the board and external LED?** A 220 Ohm resistor is used to protect the LED. Even if the circuit has some resistance on its own from cables and other components, this is generally very small and since V=IR with a very small R, a high current will pass though the circuit which can potentially burn the LED.
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?** I can not see the LED blinking when the delay is below 13 ms. At 13 ms I can slightly detect a movement, thus 12 is the max value that is undetected. I know that the LED is still blinking since I can see that the microcontroller is connected to my pc and the code has been uploaded. A more practical approach would be to use a voltmeter or oscilloscope that is able to record the voltage changes. [Code c1d](https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/c1d.ino)

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**
The LED blinks my way by setting some vasriables i,j and thes changing them inside the loop to vary the blinking speed [Code c1e](https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/c1e.ino)

### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**
[Video Blinking](https://www.youtube.com/watch?v=vYBdzQZzJ7M&feature=youtu.be)


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**
The LED remains turned on at the full range of the potentiometer. Measuring the resitance of the potentiometer it varies from 0 Ohms to approximately 10,000 Ohms (actual 10250 Ohms). The maximum brightness is achieved at 0 Ohms, where the circuit only has an external 220 Ohm reistance. AS resistance icnreases the current decreases and the LED brightness falls. However, the maixmum resistance is not enough to prevent all current from flowing in the LED and thus it still lights up.

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?** 

**b. What is analogWrite()? How is that different than digitalWrite()?**


## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**

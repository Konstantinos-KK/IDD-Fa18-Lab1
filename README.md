# IDD-Fa19-Lab1: Blink!

**A lab report by Konstantinos Karras Kallidromitis**

## Part A. Set Up a Breadboard
<p align="center"> <b> Board Setup </b> <p>
<p align="center">
  <img width="600" src="https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/initial_circuit.jpg">
</p>

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

<p align="center"> <b> Manual Fading </b> <p>
<p align="center">
  <img width="600" src="https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/manual_fading.jpg">
</p>

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?** The output pin initialized as "int led" needs to be equal to 11, since this pin is connected in the circuit.

**b. What is analogWrite()? How is that different than digitalWrite()?** The command "digitalWrite()" is set as HIGH or LOW meaning it can only output 0V or 5V. An analog value of 255 is equal to HIGH in the digital. The "analogWrite()" is able to take as an input an integer number, map it to a pin and generate a PWM signal. [Code eb](https://github.com/Konstantinos-KK/IDD-Fa18-Lab1/blob/master/eb.ino)


## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside.
<p align="center"> <b> Electronic Device: Computer Mouse </b> <p>
<p float="left">
  <img src="https://github.com/Konstantinos-KK/IDD-Fa19-Lab1/blob/master/mouse.jpg" width="425" />
  <img src="https://github.com/Konstantinos-KK/IDD-Fa19-Lab1/blob/master/opened_mouse.jpg" width="425" /> 
</p>

<p align="center"> <b> Board/Schematic </b> <p>
<p float="left">
  <img src="https://github.com/Konstantinos-KK/IDD-Fa19-Lab1/blob/master/mouse_board.jpg" width="425" />
  <img src="https://github.com/Konstantinos-KK/IDD-Fa19-Lab1/blob/master/schematic.jpg" width="425" /> 
</p>

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"** The mouse uses a photocell ([light sensor A601BS](http://www.instant-sys.com/uploads/pdf/norm/A601BS_en.pdf)) to detect changes in the reflected light from the LED pointing downwards, on the surface that has contact with the mouse. A digital signal processor is included in the chip and it is used to compute the change between images that show a movement.

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?** Every computer mouse needs to be able to detect the direction of movement and adjust it to the screen. A CMOS image sensor is used to detect the reflected light from the backlight LED. Based on the image changes it can send the correct signal to the pc without conveying it to other portions of the device.

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?** The device uses a usb cable to connect to the computer. The usb cable has an output of approximately 5V (5.15V). The usb has a DC voltage which is regulated using resistors to prevent the LEDs from burning. Capacitors are also used in the A601BS chip and externally, to stabilize the input voltage and debounce the circuit.

**d. Is information stored in your device? Where? How?** The optical sensor chip (photocell) stores images and compares the new state with the previous state to detect the change in the images and thus direction and magnitude of movement.

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.** The mouse is a gaming mouse and has multiple LEDs for RGB lighting. Since the LEDs are regulated already by resistors, I connected the external circuit in parallel to one of the LEDs, by hooking two cables to the breadboard. Since it is in parallel, the current is divided and the green LED lights up. The voltage is oscillating using an internal oscilaltor and thus the external LED changes intensity. When pressing the button the red light is connected in parallel and also lights up.

### 3. Build your light!

<p align="center"> <b> Frankenlight Design </b> <p>
<p align="center">
  <img width="600" src="https://github.com/Konstantinos-KK/IDD-Fa19-Lab1/blob/master/frankenlight_design.jpg">
</p>

**Make a video showing off your Frankenlight.** [Youtube Video](https://youtu.be/Lejn6v7X0ng)

**Include any schematics or photos in your lab write-up.**

# MaRS_Task_2
AIM:

to Make an object counter, which uses an IR Sensor to count the number of passing objects and displays the count on an LCD screen.

_____________________________________
COMPONENTS REQUIRED:

1.Arduino UNO

2.IR Sensor

3.LCD with I2C module

4.Jumper Wires

5.Breadboard 

_____________________________________

THOUGHT PROCESS:

Here for this question the IR sensor is used to deduct the object, and then using the code, which has variable 'count', which is used to count the number of objects passed by.A LCD display with I2C module is used to display the output as"Count : " and the number of objects passed by.

In this problem there will be a special case. If the object stays in the ir sensor path and does not move then the ir sensor keeps on deducting it and count will keep on increasing. So to handle that special case, I used the EXTERNAL INTERRUPT concept. Basically it defines a previous state for the pass variable when the prev state=1 and the pass=0, then the object is consider to be passed out and so the controller will count it and the count value will be displayed.




__________________________


CONNECTIONS:

(IR Sensor ->ARDUINO UNO):

VCC -> 5V

GND -> GND

OUT -> A0

(I2C LCD ->ARDUINO UNO):

SDA ->A4 

SCL -> A5

VCC -> 5V

GND -> GND

__________________________


APPLICATIONS:

Object Counter: On conveyor belts in manufacturing lines.

Entry Systems: To track how many entries occur through a door.

Smart Shelves: To count items being picked up or placed.

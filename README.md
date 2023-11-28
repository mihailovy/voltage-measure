# Voltage meter
#### A small voltage meter created with the use of arduino, C# an python

## Introduction


>The voltage meter was made with the Arduino Uno microntroller board which is operating with
>and a voltage sensor which can operate with a voltage up to 25v DC.
>Its a small project created with the intention to be presented and used as a learning material.

### Arduino Uno microcontroller

![Arduino Uno PinOut](https://tewt1.netlify.app/arduino.jpg)

### 25V DC voltage sensor
![g](https://microcontrollerslab.com/wp-content/uploads/2021/03/Voltage-sensor-module-pinout-diagram.jpg)

 

## Comunication
>In order for the arduino to properly output the measured voltage there has to be an established form of comunication.
>We establish this comunication by the usage of an USB serial port which recieves the signal sent from the Arduino.
>In order for the signal to be recieved, the port has to be opened programaticaly and there has to be an established conection between the computer and the microcontroler.
>First the arduino checks if theres an open serial comunication port and if there is one then it starts writing the output data to it with the ```Serial.Write() ``` method or the ```Serial.read()``` method depending on the version of the code.
>The signal is then decoded and displayed with the help of a graphical user interfaces  made  in Python and C#.

## Applications and usecases
>The project could be used properly as a small voltage meter in home labs, schools and even beginers tutorials for the purpose of learning the conceptions of programming, electronics and even simple electrical engineering.
>It combines all nesessary conceptions which are required in order for something to be done properly

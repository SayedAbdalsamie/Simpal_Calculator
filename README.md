# Simpal_Calculator
This Arduino project use a 16x2 LCD display and a keypad. The user enters two number using the keypad, and the Arduino clac it . The LCD display show result.

## Components Used
<ul>
<li>Arduino board (any Arduino board compatible with the LiquidCrystal and Keypad libraries)
<li>16x2 LCD display 
<li>Keypad (4x4 matrix keypad)
<li>Jumper wires
</ul>

## Circuit Diagram
<img width="560" alt="Screenshot 2023-05-19 015433" src="https://github.com/Sayedabdalsamie/Simpal_Calculator/assets/115981695/87a7f2b9-c4cd-4506-838e-aeca87496080">

## LCD Connections:

<ul>
<li>RS pin to digital pin A0
<li>Enable pin to digital pin A1
<li>D4 pin to digital pin A2
<li>D5 pin to digital pin A3
<li>D6 pin to digital pin A4
<li>D7 pin to digital pin A5
<li>R/W pin to ground
<li>VSS pin to ground
<li>VCC pin to 5V
</ul>

## Keypad Connections:
<ul>
<li>Row pins (R1, R2, R3, R4) to digital pins  9, 8, 7, 6
<li>Column pins (C1, C2, C3, C4) to analog pins 13, 12, 11, 10
</ul>

## Libraries Used
This project utilizes the following libraries:
LiquidCrystal: Allows control of LCD displays compatible with the Hitachi HD44780 driver.
Keypad: Provides functions for reading input from a keypad.

## How to Use
<ol>
<li>Set up the circuit according to the specified connections.
<li>Connect your Arduino board to your computer.
<li>Open the Arduino IDE and upload the sketch to your Arduino board.
<li>The LCD will display the initial message: "claculator".
<li>Enter a number on the keypad , press action and press "#".
<li>The LCD will display the result:
<li>If the user press"*", num1 ,num2 and result =0.

## Demo
    
https://github.com/Sayedabdalsamie/Simpal_Calculator/blob/main/Untitled%20video%20-%20Made%20with%20Clipchamp.mp4


  
  ## Made by:
<ul>
  <li><a href="https://github.com/Sayedabdalsamie">sayed abdalsamie
  <li><a href="https://github.com/Abdelrahman-Ali90">Abdalrhman ali 
  <li><a href="https://github.com/Shimaa-esmat">Shimaa Esmat
  <li><a href="https://github.com/manal-3li">Manal Ali
    <li>Shahd nassar
</ul>
  





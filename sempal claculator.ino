#include <LiquidCrystal.h> 
#include <Keypad.h> 
const byte ROWS = 4; 
const byte COLS = 4; 


char keys[ROWS][COLS] = {
  {'1','2','3','A'},

  {'4','5','6','B'},

  {'7','8','9','C'},

  {'*','0','#','D'}

  

  /*{'7','8','9','A'},

  {'4','5','6','B'},

  {'1','2','3','C'},

  {'*','0','#','D'}*/


};


byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {13,12,11,10};
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
Keypad keypad = Keypad (makeKeymap (keys),rowPins ,colPins, ROWS, ROWS);

 double Num1,Num2,Number,Result;

 char key,action;

 boolean result = false;

 

void setup() {

  lcd.begin(16, 2); 


  lcd.print("CALCULATOR Team2");

   delay(2000); 

    lcd.clear(); 

}


void loop() {

  

key = keypad.getKey();


if (key!=NO_KEY)

DetectButtons();


if (result==true)

CalculateResult();


DisplayResult();   

}


void DetectButtons()

{ 

     lcd.clear(); 

    if (key=='*') 

    { Number=Num1=Num2=Result=0; result=false;}

    

     if (key == '1') 

    {

    if (Number==0)

    Number=1;

    else

    Number = (Number*10) + 1; 

    }

    

     if (key == '4') 

    {

    if (Number==0)

    Number=4;

    else

    Number = (Number*10) + 4; 

    }

    

     if (key == '7') 

    {

    if (Number==0)

    Number=7;

    else

    Number = (Number*10) + 7; 
    } 

  


    if (key == '0')

    {

    if (Number==0)

    Number=0;

    else

    Number = (Number*10) + 0;
    }

    

     if (key == '2') 
     
    {

     if (Number==0)

    Number=2;

    else

    Number = (Number*10) + 2; 

    }

    

     if (key == '5')

    {

     if (Number==0)

    Number=5;

    else

    Number = (Number*10) + 5; 

    }

    

     if (key == '8')

    {

     if (Number==0)

    Number=8;

    else

    Number = (Number*10) + 8;

    }   

  


    if (key == '#')

    { 

    Num2=Number;

    result = true;

    }

    

     if (key == '3')

    {

     if (Number==0)

    Number=3;

    else

    Number = (Number*10) + 3; 

    }

    

     if (key == '6')

    {

    if (Number==0)

    Number=6;

    else

    Number = (Number*10) + 6; 

    }

    

     if (key == '9')

    {

    if (Number==0)

    Number=9;

    else

    Number = (Number*10) + 9; 

    }  


      if (key == 'A' || key == 'B' || key == 'C' || key == 'D') 

  {

    Num1 = Number;    

    Number =0;

    if (key == 'A')

    { action = '/';}

     if (key == 'B')

    { action = '*'; }

     if (key == 'C')

    { action = '-';}

     if (key == 'D')

    {
      action = '+';}  


    delay(100);

  }

  

}


void CalculateResult()

{

  if (action=='+')

    Result = Num1+Num2;


  if (action=='-')

    Result = Num1-Num2;


  if (action=='*')

    Result = Num1*Num2;


  if (action=='/')

    Result = Num1/Num2; 

}


void DisplayResult()

{

  lcd.setCursor(0, 0); 
 

  lcd.print(Num1); 
  lcd.print(action);
  lcd.print(Num2); 

  

  if (result==true)

  {lcd.print(" =");
 // lcd.print(Number);
  } 

  

  lcd.setCursor(0, 1);  

  lcd.print(Result); 

}

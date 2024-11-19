/*
** Exercice:
**   - The goal of this practical is to let you use everything
**	   you learned in the previous ones to design a usefull circuit
**   - Your task is to design a circuit to manage a digicode lock
**   - The lock is represented by the green LED: when it is on the
**     lock is open, when it is off the lock is closed.
**   - Your program must handle the following features:
**      - When a numeric key is pressed, you must push everyting
**		  on the displays to the left and write the key value on
**		  left-most display.
**      - When the 'D' key is pressed, you must reset the display to '0000'
**		- When the 'C' key is pressed, you must delete the last
**		  entered number and push everything else to the left
**		- When the '#' key is pressed, you must verify the code and
**        unlock the lock if the entered code is correct
**      - Bonus: When the lock is opened and the 'A' key is pressed,
**		  you may change the password to be whatever is on the 
**		  display, lock the lock and reset the display to '0000'
**        
**
*/

#include <Keypad.h>

// Keypad configuration
const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad kp = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


// The currently displayed numbers
char currentCode[] = {'0', '0', '0', '0'};

// The password of the lock
char code[] = {'4', '2', '4', '2'};

void setup()
{
//Serial.begin(9600); // Debug
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  //digitalWrite(12, LOW);
  //digitalWrite(13, LOW);
  //digitalWrite(10, LOW);
  //digitalWrite(11, LOW);
  
}

void send()
{
  digitalWrite(13, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(11,LOW);
  digitalWrite(12, HIGH);
  digitalWrite(12, LOW);
}


void toBinN(int n)
{
    while (n > 0) 
    {
      if (n % 2 == 1)
      {
        digitalWrite(11,HIGH);
        
      }
      else
      {
        digitalWrite(11,LOW);
      }
      send();
      n = n / 2;
    }
}


void loop()
{
  int input = kp.getKey() - 48;
  if(input >= 0 && input <= 9)
  {
  	toBinN(input);
  }
  else
  {
  	input += 48;
    if(input == 'A')
    {
    
    }
    else if(input == 'C')
    {
    
    }
    else if(input == 'D')
    {
    
    }
		else if(input == '#')
		{
    
		}
	}
	delay(50); // For performances
}

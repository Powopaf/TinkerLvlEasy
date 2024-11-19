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

// TODO: Write the pin configuration of the registers and the keypad configuration

// The currently displayed numbers
char currentCode[] = {'0', '0', '0', '0'};

// The password of the lock
char code[] = {'4', '2', '4', '2'};

void setup()
{
//  Serial.begin(9600); // Debug
  // TODO: Write the setup function
}


void loop()
{
  // TODO: Write your main loop
  delay(50); // For performances
}

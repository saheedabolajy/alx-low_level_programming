#include "main.h"

/**
 * islower - check if a character is lowercase
 * @C: the character
 * Return: 1 if letter is lowercase, 0 if not 
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}

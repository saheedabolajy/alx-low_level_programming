#include "main.h"

/**
 * _isalpha - prints character if letter c is in lowercase or uppercase

 * @c: character to be checked
 * Return: 1 if character is a letter, 0 otherwise
 */

int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: the area of memory to be filled
 * @a: the unsigned integer
 * @b: the character to fill the area with
 *
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int a)
{
	unsigned int i;

	for (i = 0; i < a; i++)
	{
		s[i] = b;
	}
	return (s);
}

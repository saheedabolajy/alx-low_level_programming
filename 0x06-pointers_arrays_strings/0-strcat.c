#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer void
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0')
	{
		i++;
	}
	do {
		a++;
		dset[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}

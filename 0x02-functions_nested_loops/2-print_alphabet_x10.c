#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * print_alphabet_x10 - prints the lower case
 * Return: Allways success
 */
void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)

	{

	char i;


	for(i = 'a'; i <= 'z'; i++)
	
		_putchar(i);
	_putchar('\n');

	loop++

}

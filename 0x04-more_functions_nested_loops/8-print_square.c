#include "main.h"

/**
 * print_square - prints a square
 * @n : number of line to be printed
 * Return: void
 */
void print_square(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;

		while (ii < n)
		{
			_putchar('#');
			i++;
		}


		_putchar('\n');
		i++;

	}
	if (i == 0)
		_putchar('\n');
}

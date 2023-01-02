#include "main.h"

/**
 * print_square - prints a square
 * @n: number of line to be printed
 * Return: void
 */
void print_square(int size)
{
	int i = 0, h;

	while (i < n && n > 0)
	{
		h = 0;
		while (h < n)
		{
			_putchar('#');
			h++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

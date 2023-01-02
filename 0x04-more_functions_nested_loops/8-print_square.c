#include "main.h"

/**
 * print_square - prints a square
 * @n : number of line to be printed
 * Return: void
 */
void print_square(int size)
{
	int h, w;


	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
			for (w = 0; w <= size; w++)
			{
			_putchar('0');
			}
			if (h == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

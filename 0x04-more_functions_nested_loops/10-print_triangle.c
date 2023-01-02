#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, h;


	while (i <= size && size > 0)
	{
		h = 0;
		while (h < size  - 1)
		{
			_putchar(' ');
			i++;
		}
		h = 0;
		while (h < i)
		{
			_putchar('#');
			h++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}

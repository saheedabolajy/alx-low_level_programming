#include <stdio.h>

/**
 * main - print all single numbers of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}

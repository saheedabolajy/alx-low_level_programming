#include <stdio.h>
/**
 * betty style doc for function main of print alphabet *
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}




#include "main.h"

/**
 * print_ alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for(ten = 0; ten <= 'z'; la++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}

}

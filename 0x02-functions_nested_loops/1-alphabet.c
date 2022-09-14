#include "main.h"

/**
 * print_alphabet - prints from a to z followed by a new line
 * return: always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

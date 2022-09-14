#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : is a parameter
 * Return: always 0
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		test = -1;
		_putchar('-');
	}
	else
	{
		test = 0;
		_putchar(0);
	}
	return (test);
}

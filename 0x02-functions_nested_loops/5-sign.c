#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : is a parameter
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar(0);
	}
}

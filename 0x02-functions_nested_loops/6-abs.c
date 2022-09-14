#include "main.h"
/**
 * _abs - gives the absolute value
 * @c : a parameter
 * Return: always 0.
 */

int _abs(int c)
{

	int test;
	if (c < 0)
	{
		test = c * -1;
	}
	else
	{
		test = c * 1;
	}
	return (test);
}


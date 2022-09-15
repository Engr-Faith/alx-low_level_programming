#include "main.h"
/**
 * _isupper - checks of upper case
 * @c : a parameter
 * Return: always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

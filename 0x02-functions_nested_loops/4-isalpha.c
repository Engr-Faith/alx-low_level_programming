#include "main.h"
/**
 * _isalpha - it checks for alphabets
 * @c: is a parmeter
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c > 'A' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

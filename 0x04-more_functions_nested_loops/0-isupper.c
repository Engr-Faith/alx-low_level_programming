#include "main.h"
/**
 * _isupper(int c) - checks of upper case
 * @c : a parameter
 * Return: always 0.
 */

int _isupper(int c)
{
	if (c < 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return 0;
	}
}
#include "main.h"

/**
 * _islower - checks for lower case
 * @c: contains value to be compared
 * return: always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else

	{
		return (0);
	}
}

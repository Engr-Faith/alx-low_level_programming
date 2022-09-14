#include "main.h"

/**
 * islower - checks for lower case
 * retunr: always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else

	{
		return(0);
	}
}

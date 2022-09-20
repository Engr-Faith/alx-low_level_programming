#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps value
 * @a: a param
 * @b: a param
 * return: always 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints in reverse
 * @s - param;
 * Return: always 0.
 */

void print_rev(char *s)
{
	int i;

	len = strlen(*s);

	for (i = len; i >=0; i++)
	{
		printf("%c", s[i]);
	}


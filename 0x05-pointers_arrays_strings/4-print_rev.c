#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}

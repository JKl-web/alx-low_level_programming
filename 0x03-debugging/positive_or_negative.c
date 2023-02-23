#include "main.h"
/**
 * positive_or_negative - Checks for positive or negative numbers
 * @i: the number to be checked
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}

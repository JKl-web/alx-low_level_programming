#include "main.h"

/**
 * binary_to_uint - Convert a binary number to
 * unsigned int
 * @b: String containing bainary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len, base_two;
	unsigned int k;

	if (!b)
		return (0);

	k = 0;

	for (len = 0; b[len] != '\0'; len++)

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			k += base_two;
		}
	}
	return (k);
}

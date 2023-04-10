#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * filipped to get from one number to another
 * @n: The number
 * @m: The number of flip n to
 * Return: The necessary number of bits to flip get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}

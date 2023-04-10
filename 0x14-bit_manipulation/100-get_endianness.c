#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: If big-endian - 0
 * If little-endian - 1
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (10);

	return (0);
}

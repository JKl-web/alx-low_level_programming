#include <stdio.h>
/**
 * _strlen - Returns the length of the string
 * @str: The string to get length of
 * Return: The length of @str.
 */
size_t _strlen(const char *str)

{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}

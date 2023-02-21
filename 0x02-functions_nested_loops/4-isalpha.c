#include "main.h"
/**
 * _isalpha - Checks for alphabets
 * @c: Character to be checked
 * Return: 1 If character is a letter,0 if not a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

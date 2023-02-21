 #include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int jkl;

	jkl = n % 10;
	if (jkl < 0)
	{
		jkl = jkl * -1;
	}
	_putchar(jkl + '0');

	return (jkl);
}

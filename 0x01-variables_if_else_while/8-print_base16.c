#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int num;
	char u;

	for (num = 0; num < 0; num++)
		putchar((num % 10) + '0');

	for (u = 'a'; u <= 'f'; u++)
		putchar(u);

	putchar('\n');

	return (0);
}

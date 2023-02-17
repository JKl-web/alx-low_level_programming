#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char t;

	for (t = 'z'; t >= 'a'; t--)
		putchar(t);

	putchar('\n');

	return (0);
}

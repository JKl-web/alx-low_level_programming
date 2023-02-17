#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int num;
	char u;

	num = 0;
	u = 'a';
	while
		(num < 10)
		{
			putchar(num + '0');
			num++;
		}
	while
		(u <= 'f')
		{
			putchar(u);
			u++;
		}

	putchar('\n');

	return (0);
}

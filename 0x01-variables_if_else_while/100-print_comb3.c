#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int j, k;

	for (j = '0'; j < '9'; j++)
	{
		for (k = j + 1; k <= '9'; k++)
		{
			if (k != j)
			{
				putchar(j);
				putchar(k);
				if (j == '8' && k == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

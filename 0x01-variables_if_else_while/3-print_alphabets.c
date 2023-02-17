#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);

	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}

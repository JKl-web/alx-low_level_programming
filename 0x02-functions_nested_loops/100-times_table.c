#include "main.h"
/**
 * print_times_table - Prints the times tables of the input,
 * Starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{

	int x, y, mult, one, ten, hund;

	x = 0;
	if (n >= 0 && n <= 15)
	{
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				mult = x * y;
				one = mult % 10;
				ten = mult % 100 / 10;
				hund = mult / 100;
				if (hund == 0 && y != 0)
				{
					_putchar(' ');
					if (ten == 0)
						_putchar(' ');
					else
						_putchar(ten + '0');
				}
				else if (hund != 0)
				{
					_putchar(hund + '0');
					_putchar(ten + '0');
				}
				_putchar(one + '0');
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}

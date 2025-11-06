#include "main.h"
/**
 * print_times_table - Prints times table, starting with 0
 *@n: Number that do the times table
 *
 * Return: 0
*/
void print_times_table(int n)
{
	int a, b, x = 0;

	if (n < 0 || n > 15)
	return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			x = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (x < 100)
				{
					_putchar(' ');
				}
			}
			if (x < 10)
			{
				_putchar('0' + x);
			}
			else if (x < 100)
			{
				_putchar('0' + (x / 10)), _putchar('0' + (x % 10));
			}
			else
			{
				_putchar('0' + (x / 100)), _putchar('0' + ((x / 10) % 10));
				_putchar('0' + (x % 10));
			}
		}
		_putchar('\n');
	}
}

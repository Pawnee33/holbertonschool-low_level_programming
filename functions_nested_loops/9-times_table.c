#include "main.h"
/**
 * times_table - Prints  the 9 times table, starting with 0
 * , starting from 00:00 to 23:59
 * int_hour - Prints 'hour'
 * int_minutes - Prints 'minutes'
 *
 * Return: 0
*/
void times_table(void)
{
	int a = 0;
	int b = 0;
	int x = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			x = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
					_putchar(' ');
			}

			if (x < 10)
			{
				_putchar('0' + x);
			}
			else
			{
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 * , starting from 00:00 to 23:59
 * int_hour - Prints 'hour'
 * int_minutes - Prints 'minutes'
 *
 * Return: 0
*/
void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour < 24; hour++)
	{

		for (minutes = 0; minutes < 60; minutes++)
        {
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (minutes / 10));
		_putchar('0' + (minutes % 10));
		_putchar('\n');
        }
	}
}

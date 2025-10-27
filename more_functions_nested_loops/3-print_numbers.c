#include "main.h"
/**
 * print_numbers - Function that prints numbers (0 to 9)
 * for - loop runs while 'i' is less to '58' up to '9'
 * _putchar(i) - Prints 0 to 9
 * _putchar('\n') - Print a newline
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

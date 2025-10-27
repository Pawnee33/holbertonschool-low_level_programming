#include "main.h"
/**
 * print_numbers - Function that prints numbers (0 to 9)
 * for - loop runs while 'i' is less to '58' up to '9'
 * if - Check if 'i' isn't equal to '50' and '52'
 * _putchar(i) - Prints 0 to 9
 * _putchar('\n') - Print a newline
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
	

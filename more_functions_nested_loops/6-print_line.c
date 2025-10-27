#include "main.h"
/**
 * print-line - Function that draws a straight line
 * if - check if 'n' is more than '0'
 * for - loop runs while 'i' is less to 'n'
 * _putchar('_') - Prints '_'
 * _putchar('\n') - Print a newline
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

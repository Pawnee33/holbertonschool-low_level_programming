#include "main.h"
/**
 * print_square - Function that prints a square
 * @size: number of times the character '#' should be printed
 * if - check if 'size' is more than '0'
 * for - loop runs while 'i' is less to 'size'
 * for - loop runs while 'j' is less to 'i'
 * _putchar(' ') - Prints '#'
 * _putchar('\n') - Print a newline
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

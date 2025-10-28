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
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
    {
        _putchar('\n');
        return;
    }
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
                _putchar(' ');
			}
            for (j = 0; j < i; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
		}
}
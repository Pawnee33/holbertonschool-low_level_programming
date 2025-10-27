#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line
 * @n: number of times the character '\' should be printed
 * if - check if 'n' is more than '0'
 * for - loop runs while 'lignes' is less to 'n'
 * for - loop runs while 'espaces' is less to 'lignes'
 * _putchar(' ') - Prints ' '
 * _putchar('\\') - Prints '\'
 * _putchar('\n') - Print a newline
*/
void print_diagonal(int n)
{
	int lignes, espaces;

	if (n > 0)
	{
		for (lignes = 0; lignes < n; lignes++)
		{
			for (espaces = 0; espaces < lignes; espaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


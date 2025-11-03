#include "main.h"
/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to an array of 8 charcters
 * for - loop through each row of the chessboard
 * for - loop through each column of the current row
 * Description: This function prints the chessboard
 * _putchar(a[lignes][colonnes]) - print one square
 * _putchar('\n') - move to the next row
 */
void print_chessboard(char (*a)[8])
{
	int lignes;
	int colonnes;

	for (lignes = 0; lignes <= 7; lignes++)
	{
		for (colonnes = 0; colonnes <= 7; colonnes++)
		{
			_putchar(a[lignes][colonnes]);
		}
		_putchar('\n');
	}
}

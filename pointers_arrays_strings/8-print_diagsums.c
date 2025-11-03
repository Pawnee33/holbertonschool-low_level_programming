#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of
 * , a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix (size x size)
 *
 * Description: This function calculates the sum of the main diagonal
 * (top-left to bottom-right) and the secondary diagonal
 * (top-right to bottom-left)
 * and prints both sums separated by a comma and a space.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_ligne = 0;
	int diagonal_colonne = 0;

	for (i = 0; i < size; i++)
	{
		diagonal_ligne += *(a + i * size + i);
		diagonal_colonne += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", diagonal_ligne, diagonal_colonne);
}

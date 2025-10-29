#include "main.h"
/**
 * print_array - Function that prints n elements of an array
 * , followed by a new line
 * @a: pointer to the first element of the array
 * @n: number of elements to print
 * for - loop through the array 'a'
 * printf - Prints each integer
 * prinf - Prints a new line
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

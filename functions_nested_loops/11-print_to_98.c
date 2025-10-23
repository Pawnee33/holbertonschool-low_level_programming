#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 inclusive,
 * in ascending or descending order depending on the value of n.
 * @n: the starting number
 *
 * Description: The function prints each number followed by a comma and
 * a space, except for the last number (98), which is
 * followed by a newline.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}

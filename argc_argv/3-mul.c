#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Description: This program multiplies two integers provided
 * as command-line arguments. If exactly two arguments are
 * provided, it prints the result. Otherwise, it prints "Error"
 * and returns 1.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int product1;
	int product2;

	if (argc == 3)
	{
		product1 = atoi(argv[1]);
		product2 = atoi(argv[2]);
		printf("%d\n", product1 *product2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

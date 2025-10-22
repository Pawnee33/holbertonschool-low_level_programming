#include "main.h"
/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");

		return (1);
	}
	else if (n == 0)
	{
		printf("0");

		return (0);
	}
	else (n < 0)
	{
		printf("-");

		return (-1);
	}
}

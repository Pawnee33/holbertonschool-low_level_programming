#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * last_digit - the number to check
 *
 * Return: last_digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	_putchar('\n');

	return (last_digit);
}

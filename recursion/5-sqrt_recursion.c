#include "main.h"
/**
 * _sqrt_helper - recursively finds the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current value to test as a possible square root
 *
 * Return: the natural square root of n if it exists
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the value of 'x' raised to the power of 'y'
 * @n: the base integer
 *
 * Return: The function _sqrt_helper
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (_sqrt_helper(n, 0));
}

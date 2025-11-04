#include "main.h"
/**
 * _prime_number_test - recursively checks if a number has a divisor
 * @n: number to check
 * @test: current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_number_test(int n, int test)
{
	if (test == n)
		return (1);
	if (n % test == 0)
		return (0);
	return (_prime_number_test(n, test + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number_test(n, n));
}

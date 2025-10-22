#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the number to check
 *
 * Return: -n if is less than 0, n if more and equal than 0
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

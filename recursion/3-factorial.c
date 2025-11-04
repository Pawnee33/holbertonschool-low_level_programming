#include "main.h"
/**
 * factorial - Function that return the factorial number
 * @n: the number to be return
 * if - Base case
 * Return: the factorial number
 * Return: -1
*/
int factorial(int n)
{
	if (n <= 1)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}

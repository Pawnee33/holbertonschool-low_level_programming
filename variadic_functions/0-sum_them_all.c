#include "variadic_functions.h"
/**
* sum_them_all - Function that result of all its parameters
* @n: the size of numbers to result
*
* Return: The result of my parameters and 0 if n equal 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int result = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}

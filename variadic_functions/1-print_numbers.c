#include "variadic_functions.h"
/**
* print_numbers - Prints numbers with a separator ','
* between each numbers
* @separator: my character who separate my numbers
* @n: the size of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	int numbers;
	va_start(ap, n);

	for (i =0; i < n; i++)
	{
		numbers = va_arg(ap, int);
		printf("%d", numbers);
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - Prints strings with a separator ','
* between each strings
* @separator: my character who separate my strings
* @n: the size of numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
        if (str == NULL)
            printf("(nil)");
        else
		    printf("%s", str);
		if (separator != NULL && i < n - 1)
		    printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

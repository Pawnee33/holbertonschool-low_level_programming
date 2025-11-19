#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - Prints strings with a separator ','
* between each strings
* @separator: my character who separate my strings
* @n: the size of strings
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i =0;
	int types = 0;
	char *s;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (types)
			printf(",");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				types = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				types = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				types = 1;
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				types = 1;
				break;
			default:
				break;
		}
		i++;
			
	}	
	printf("\n");
	va_end(ap);
}

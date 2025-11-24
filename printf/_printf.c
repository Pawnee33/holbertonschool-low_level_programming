#include "_printf.h"
/**
 * _printf - Prints formated output to the standard output.
 * @format: The string to print containing the specifiers.
 *
 * Return: The numbers of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	spec f_spe[] = {
		{'c', print_char},
		{'s', print_string},
		{0, NULL},
	};
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
				count++;
				i++;
				continue;					
		}
		for (j = 0; f_spe[j].type; j++)
			if (format[i + 1] == f_spe[j].type)
			{
				count += f_spe[j].print_format(args);
				i++;
				break;
			}
	}
	va_end(args);
	return (count);
}

#include "_printf.h"
/**
 * print_char - Prints a single character.
 * @args: The character to print.
 *
 * Return: 1.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	
	_putchar(c);
	return (1);
}
/**
 * print_string - Prints a string of characters.
 * @args: The string to print.
 *
 * Return: count.
 */
int print_string(va_list args)
{
	int i, count = 0;
	char *pnull = "(null)";
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
			count++;
		}
	}
	else
	{
		while(*pnull != '\0')
		{
			_putchar(*pnull);
			pnull++;
			count++;
		}
	}
	return (count);
}

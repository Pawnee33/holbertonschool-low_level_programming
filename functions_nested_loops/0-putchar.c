#include <stdio.h>
#include "main.h"
/**
 * main - My principal function
 * char - My variable 'ch' set to _putchar
 * int - My varible 'i' set to '0'
 * while - loop runs while 'i' isn't the end-of-string, keep looping
 * putchar - print "_putchar"
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)
{
	char *str = "_putchar";

	int i = 0;

	while (str[i] != '\0')

	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

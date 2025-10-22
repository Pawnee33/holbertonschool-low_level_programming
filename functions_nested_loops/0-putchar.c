#include <stdio.h>
#include "main.h"
/**
 * main - My principal function
 * char - My variable 'ch' set to _putchar
 * putchar - print "_putchar"
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)

	char *str = "_putchar";

	int i =0;

	while (str[i] != '\0')
{
	putchar(str[i]);
	i++;

	putchar('\n');
	return (0);
}

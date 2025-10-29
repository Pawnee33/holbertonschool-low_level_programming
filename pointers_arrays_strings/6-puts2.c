#include "main.h"
/**
 * _puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Description: This function prints one character out of two,
 * starting with the first character, followed by a new line.
 * It stops printing when it reaches the null terminator '\0'
 * to avoid reading beyond the end of the string.
 */
void puts2(char *str)
{
int i;

while (str[i] != '\0')
{
	_putchar(str[i]);
	i += 2;
}

_putchar('\n');
}

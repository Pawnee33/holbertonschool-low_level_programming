#include "main.h"
/**
 * _puts2 - Function that prints every other character of a string
 * , starting with the first character, followed by a new line
 * @str: the string we want to know
 * int i - set to '0'
 * for - run through the array 'str'
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
	_putchar(str[i]);

_putchar('\n');
}

#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line
 * @str: the string we want to know
 * int i - set to '0'
 * for - run through the array 'str'
*/
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
_putchar('\n');
}
}

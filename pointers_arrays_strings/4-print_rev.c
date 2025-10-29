#include "main.h"
/**
 * print_rev - Function that prints a string, in reverse
 * , followed by a new line
 * @s: the string we want to know
 * int len - set to '0'
 * while - run through the array 's'
 * for - Display the array 's' in reverse
*/
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
{
for (len = len - 1; len >= 0; len--)
{
_putchar(s[len]);
}
}
_putchar('\n');
}

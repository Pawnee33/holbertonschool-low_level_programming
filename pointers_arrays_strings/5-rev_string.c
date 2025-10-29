#include "main.h"
/**
 * rev_string - Function that reverses a string
 * , followed by a new line
 * @s: the string we want to reverse
 * int len - set to '0'
 * while - run through the array 's'
 * for - Display the array 's' in reverse
*/
void rev_string(char *s)
{
int len = 0;
int start;
char temp;

while (s[len] != '\0')
len++;
{
for (start = 0; start < len / 2; start++)
{
temp = s[start];
s[start] = s[len - 1 -start];
s[len - 1 - start] = temp;
}
}
}
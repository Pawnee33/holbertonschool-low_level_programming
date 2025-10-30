#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * int i - set to '0'
 * int sign - set to '1'
 * int result - set to '0'
 * while - handle signs before the number
 * while - read digits and build the result
 * Return: return the final result with the correct sign
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = result * 10 - (s[i] - '0');
}
else if (started)
break;
i++;
}
if (!started)
return (0);
if (sign > 0)
result = -result;
return (result);
}

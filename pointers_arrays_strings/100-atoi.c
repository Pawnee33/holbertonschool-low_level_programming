#include "main.h"
/**
 * *_strcpy - Function that copies a string from source to destination
 * @dest: pointer to the buffer where the string will be copied
 * @src: pointer to the string to copy
 * while - loop through the array 'src'
 * Return: dest
*/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}

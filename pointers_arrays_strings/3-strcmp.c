#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * while - loop as long as charcters match and
 * , not end os string
 * Return: dest
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

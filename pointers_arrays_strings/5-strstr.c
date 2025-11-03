#include "main.h"
/**
 * *_strpbrk - Function that searches a string any of
 * set of bytes
 * @s: string to be scanned
 * @accept: string contaning accepting characters
 * for - loop through the string until ce reach the null terminator
 * for - Check if 's[i] is in 'accept'
 * if - My string is equal to 'accept'
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

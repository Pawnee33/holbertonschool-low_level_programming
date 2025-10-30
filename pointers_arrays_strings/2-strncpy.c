#include "main.h"
/**
 * *_strncpy - Copies up to 'n' characters from the string 'src' to 'dest'
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 * int i - set to '0'
 * while - Copie until 'n' characters or until '\0' from 'src'
 * while - Complete with \0 if 'src' was shorter than n
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

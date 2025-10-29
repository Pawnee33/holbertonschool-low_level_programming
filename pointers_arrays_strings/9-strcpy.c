#include "main.h"
/**
 * *_strcpy - Function that copies a string from source to destination
 * @dest: pointer to the buffer where the string will be copied
 * @src: pointer to the string to copy
 * while - loop through the array 'src'
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

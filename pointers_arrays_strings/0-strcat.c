#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string, must be large enough to hold the result
 * @src: source string to append to dest
 * int i - set to '0'
 * int j - set to '0'
 * while - iterate through the string 'dest' until '\0'
 * , 'i' specify the postion where start adding 'src'
 * while - iterate through the string 'src' until '\0'
 * , then copies all characters from src to the end of dest
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

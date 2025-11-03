#include "main.h"
/**
 * *_memcpy - Function that fills memory with a constant byte
 * @dest: pointer to the memory area to fill
 * @src: the constan byte to fill with
 * @n: number of bytes to fill
 * for - loop through the first n bytes of memory area
 * Return: pointer to the memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"
/**
 * *_memset - Function that fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the constan byte to fill with
 * @n: number of bytes to fill
 * for - loop through the first n bytes of memory area
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

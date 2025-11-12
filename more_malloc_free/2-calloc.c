#include "main.h"
/**
* *_calloc - Function that allocates memory
* and initialse the memory to zero using malloc
* @nmemb: Number of bytes
* @size: Size in bytes of each element
* Return: my pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		pointer[i] = 0;

	return ((void *)pointer);
}

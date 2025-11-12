#include "main.h"
/**
* *malloc_checked - Function that allocates memory
* using malloc
* @b: Number of bytes
* Return: my pointer
*/
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	exit(98);
	return (pointer);
}

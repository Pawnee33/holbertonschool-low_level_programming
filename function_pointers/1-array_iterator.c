#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - Function that executes a function
* given as a parameter on each element of an array
* @array: The array to iterates
* @size: size of my array
* @action: my pointer to the function to ececutes
* Return: NULL
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

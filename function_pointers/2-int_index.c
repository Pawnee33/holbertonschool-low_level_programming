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
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || size <= 0)
		return(-1);
	{
		while (i < size)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0) 
				return (i);
			i++;
		}
	}
	return (-1);
}

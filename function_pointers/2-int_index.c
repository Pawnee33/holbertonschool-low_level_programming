#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0,
 * otherwise -1. Also returns -1 if size <= 0 or if array or cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	{
		while (i < size)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}

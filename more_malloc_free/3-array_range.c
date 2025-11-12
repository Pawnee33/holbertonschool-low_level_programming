#include "main.h"
/**
* *array_range - Creates an array of intergers
* from min to max
* @min: first value of the array
* @max: second value of the array
* Return: my pointer
*/
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

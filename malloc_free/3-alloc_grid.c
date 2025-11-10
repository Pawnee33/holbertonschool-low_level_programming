#include "main.h"
/**
* **alloc_grid - Function that returns a pointer to a
* 2 dimensional array of integers
* @width: the number of columns
* @height: the number of rows
* Return: the allocated and initialized 2D array
*/
int **alloc_grid(int width, int height)
{
	int **grille;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grille = malloc(sizeof(int *) * height);
	if (grille == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		grille[i] = malloc(sizeof(int) * width);
		if (grille[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(grille[j]);
			free(grille);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grille[i][j] = 0;
		}
	}
	return (grille);
}

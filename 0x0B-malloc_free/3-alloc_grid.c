#include "main.h"

/**
 * alloc_grid - function to return pointer
 * @width: width of the integer
 * @height: height to be considered
 * Return: pointer to array
 */




int **alloc_grid(int width, int height)
{

	int **result;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(int *) * height);


	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
			free(result[j]);
		return (NULL);
		}
		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}
	return (result);
}

#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - main function
 *@grid: parameter
 *@height: parameter
 *Return: 0
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits string into two
 * @str: string
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **aout;
	size_t c, height, i, j, cy;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)

		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc(sizeof(char *) * (height + 1));
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = cy; i < height; i++)
	{
		for (c = cy; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				cy++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - cy + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; cy <= c; cy++, j++)
			aout[i][j] = str[cy];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}


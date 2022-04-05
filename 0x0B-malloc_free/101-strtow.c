#include "main.h"
#include <stdlib.h>

/**
 * str_free - frees a 2 dimensional array
 * @grid: dimensional array of char
 * @height: height of array
 */
void str_free(char **grid, unsigned int height)
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
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer of a array of integers
 */
char **strtow(char *str)
{
	char **tab;
	unsigned int c, height = 0, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	tab = malloc((height + 1) * sizeof(char *));
	if (tab == NULL || height == 0)
	{
		free(tab);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c +1] == '\0'))
			{
				tab[i] = malloc((c - k + 2) * sizeof(char));
				if (tab[i] == NULL)
				{
					str_free(tab, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++,j++)
			tab[i][j] = str[k];
		tab[i][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac : number of strings to concat
 * @av: array of strings
 *
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *tab;
	int i, j, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	tab = malloc(sizeof(char) * size + 1);
	if (tab == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			tab[index++] = av[i][j];

		tab[index++] = '\n';
	}
	tab[size] = '\0';
	return (tab);
}

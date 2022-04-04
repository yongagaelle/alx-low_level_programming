#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: a pointer to the array
 */
char *_strdup(char *str)
{
	char *tab;
	int i, lenght = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		lenght++;

	tab = malloc(sizeof(char) * (lenght + 1));

	if (tab == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		tab[i] = str[i];

	tab[lenght] = '\0';

	return (tab);
}

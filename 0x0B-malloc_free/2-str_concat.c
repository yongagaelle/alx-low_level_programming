#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	char *tab;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[i])
		i++;

	if (s2 == NULL)
		s2 = "";
	while (s2[j])
		j++;

	tab = malloc(sizeof(char) * (i + j + 1));
	if (tab == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		tab[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		tab[i] = s2[j];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

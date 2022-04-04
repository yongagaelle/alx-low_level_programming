#include "main.h"
#include <stdlib.h>

/**
 * create_array - initializes it with a specific char
 * @size: number of arguments passed in call to program
 * @c: the specific char to initialize the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = malloc(sizeof(char) * size);
	if (tab != NULL)
	{
		for (i = 0; i < size; i++)
			*(tab + i) = c;
	}
	return (tab);
}

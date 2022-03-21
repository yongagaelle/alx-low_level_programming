#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: the string to get the length of
 *
 * Return: the length of @str.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

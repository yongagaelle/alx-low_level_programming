#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: the prefix to be measured.
 *
 * Return: the number of bytes of accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int index = 0;

	while (*s)
	{
		for (; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				count++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (count);
		}
		
		s++;
	}

	return (count);
}

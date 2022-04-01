#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: string to be searched
 *
 * Return: pointer to first occurrence of accept
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; *(needle + i) != '\0' && *(haystack + i) != '\0'; i++)
		{
			if (*(haystack + i) != *(needle + i))
				break;
		}
		if (*(needle + i) == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}

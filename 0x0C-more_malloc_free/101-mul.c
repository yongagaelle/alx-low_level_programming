#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit_error - print error message and exit of program
 *
 * Return: nothing.
 * On error, -1 is returned, and errno is set appropriately.
 */
void exit_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * number_str_len - returns the length of string numbers or exit
 *
 * @string: pointer to string.
 * Return: length of string.
 */
int number_str_len(char *string)
{
	int len = 0;

	while (string[len])
	{
		if (string[len] < '0' || '9' < string[len])
			exit_error();
		len++;
	}
	return (len);
}

/**
 * print_number_string - print number of string
 *
 * @tab: pointer to string.
 * @len: Length of the string
 *
 * Return: nothing.
 */
void print_number_string(char *tab, int len)
{
	char printed = 0;
	int i;

	for (i = 0; i < len; i++)
		if (printed || ('0' < tab[i] && tab[i] <= '9'))
		{
			_putchar(tab[i]);
			printed = 1;
		}

	if (!printed)
		_putchar('0');
	_putchar('\n');
}

/**
 * main - enter point
 *
 * @argc: number of parameters passed to program
 * @argv: array of parameters
 *
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int len1 = 0, len2 = 0, sum = 0, index1, index2, i;
	char *num1, *num2, *tab;

	if (argc != 3)
		exit_error();

	num1 = argv[1];
	num2 = argv[2];
	len1 = number_str_len(num1);
	len2 = number_str_len(num2);

	tab = malloc(sizeof(char) * (len1 + len2));
	if (tab == NULL)
		exit_error();

	/* multiply the numbers */
	index1 = len1 - 1;
	for (i = len1 + len2 - 1; i > 0; i--, index1--)
	{
		for (index2 = 0; index2 < len2; index2++)
		{
			if (index2 < (len1 - index1) && (index1 + index2) >= 0)
				sum += (num1[index1 + index2] - '0') * (num2[len2 - index2 - 1] - '0');
		}
		tab[i] = (sum % 10) + '0';
		sum /= 10;
	}
	if (sum != 0)
		tab[i] = sum + '0';

	/* print the number*/
	print_number_string(tab, (len1 + len2));

	free(tab);
	return (0);
}

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}

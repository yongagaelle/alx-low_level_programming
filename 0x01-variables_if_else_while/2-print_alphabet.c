#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

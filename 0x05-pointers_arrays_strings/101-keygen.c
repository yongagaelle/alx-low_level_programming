#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid  password
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	srand(time(NULL));
	for (i = 0; i <= 37; i++)
		putchar(rand() % (122 - 33) + 33);

	return (0);
}

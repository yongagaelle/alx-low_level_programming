#include "main,h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int nu;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (nu = 0; nu <= 14; nu++)
			_putchar(nu + '0');

		_putchar('\n');
	}
}

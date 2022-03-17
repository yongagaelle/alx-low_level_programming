#include "main,h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int nu = 0;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (nu = 0; nu <= 14; nu++)
		{
			if (nu >= 10)
			{
				_putchar(nu / 10 + '0');
			}
			 _putchar(nu % 10 + '0');
		}

		_putchar('\n');
	}
}

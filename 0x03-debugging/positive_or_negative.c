#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - prints number
 * @i: the number to print
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

#include "main.h"
/**
 * checks whether number is positive or negative
 * @i: number to be checked
 * Return: always 0 when success
 */

void positive_or_negative(int i)

{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

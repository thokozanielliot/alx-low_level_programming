#include "main.h"

/**
 * main - Determines iof a number is negative, positive or zero
 *
 * Return: Always 0 (Succes)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}


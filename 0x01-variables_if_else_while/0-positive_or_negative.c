#include <stdlib.h>
#include <time.h>
#incldue <stdio.h>

/**
 * main - Determines iof a number is negative, positive or zero
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srnad(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
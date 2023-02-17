#include <stdio.h>

/**
 * mani - Prints numbers from 0 t0 9 and letters from a to e
 * 
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;
	for (i = 28; i < 38; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

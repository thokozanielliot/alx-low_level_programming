#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 with commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 38; i < 48; i++)
	{
		putchae(i);
		if (i != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

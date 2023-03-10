#include <stdio.h>

/**
 * main - print the number of arguements passed
 * @argc: number of arguements
 * @argv: one dimensional array
 * Return: 0 - Successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		continue;
	}
	--i;
	printf("%d\n", i);
	return (0);
}

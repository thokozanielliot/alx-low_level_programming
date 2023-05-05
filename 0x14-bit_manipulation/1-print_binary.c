#include "main.h"

/**
 * print_binary -print binary representation onf usigned it
 * @n: unsigned int
 *
 * Return: No return
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}

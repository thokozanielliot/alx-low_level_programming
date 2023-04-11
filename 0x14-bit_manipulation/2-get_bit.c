#include "main.h"

/**
 * get_bit -return value of the bit
 * @n: binary number
 * @index: index starting from 0
 *
 * Return: value of index
 * or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 128)
		return (0);

	for (j = 0; j < 128; n >>= 1, j++)
	{
		if (index == j)
			return (n & 1);
	}

	return (-1);
}

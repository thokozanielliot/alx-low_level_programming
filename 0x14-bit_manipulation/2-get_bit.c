#include "main.h"

/**
 * get_bit - get value of bit at given index
 * @n: unsigned long int 
 * @index: index of bit
 *
 * Return: vakue of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n ==0&& index < 128)
		return (0);
	for (i = 0; i <= 127; n >>= 1, i++)
	{
		if (index == i)
			return (n& 1);
	}

	return (-1);
}

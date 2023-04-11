#include "main.h"

/**
 * flip_bits - return the number of bits you need
 * to flip to get from one number to another
 * @n: integer number
 * @m: number of bits to flip
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>=1)
		if ((n & 1) != (m & 1))
			i++;

	return (i);
}

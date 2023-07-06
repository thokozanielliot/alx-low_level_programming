#include "main.h"

/**
 * flip_bits - countsnumber of bits to be flipped
 * to get to the other number
 * @n: initial number
 * @m: final number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			nbits++;

	return (nbits);
}

#include "main.h"

/**
 * flip_bits -gives nukber of bits to be flipped
 * @n: first arguement
 * @m: second arguement
 *
 * Retuen: number of bits
 */
unsigned int  flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			i++;

	return (i);
}

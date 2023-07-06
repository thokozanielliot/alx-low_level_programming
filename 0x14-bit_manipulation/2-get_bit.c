#include "main.h"

/**
 * get-bit - returns value of bit at a given index
 * @n: binary number
 * @index: index to get bit
 *
 * Return: -1 if error, else value of bt
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f;

	if (n == 0 && index < 24)
		return (0);
	for (f = 0; f <= 23; n >>= 1, f++)
		if (index == f)
			return (n & 1);

	return (-1);
}

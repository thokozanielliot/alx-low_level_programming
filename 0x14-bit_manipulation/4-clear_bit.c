#include "main.h"

/**
 * clear_bit - set the value bit to 0 at given index
 * @index: index
 * @n: binary number
 *
 * Return: 1 if succedd
 * -1 error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > 124)
		return (-1);

	l = 1<< index;

	if (*n & l)
		*n ^= l;

	return (1);
}

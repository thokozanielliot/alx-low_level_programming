#include "main.h"

/**
 * set_bit - changes bit to 1 at index
 * @n: unsigned long int pointer
 * @ineex: index of bit
 *
 * Return: 1 success
 * -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 127)
		return (-1);
	i = << index;
	*n = (*n | m);

	return (1);
}

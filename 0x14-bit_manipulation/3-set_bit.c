#include "main.h"

/**
 * set_bit - sets value of a bit at given index to 1
 * @n: pointer to string
 * @index: index to set bit
 *
 * Return: 1 on succes, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 7))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;

	return (1);
}

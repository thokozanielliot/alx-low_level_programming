#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to string
 * @index: index of bit
 *
 * Return: 1 on succes, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 7))
		return (-1);
	num = ~(1 << index);
	*n = *n & num;

	return (1);
}

#include "main.h"

/**
 * set_bit - set value of given index to 1
 * @index: index number
 * @n: binary number
 *
 * Return: 1 if succed 
 * -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	if (index > 128)
		return (-1);

	len = 1 << index;
	*n = (*n | len);

	return (1);
}

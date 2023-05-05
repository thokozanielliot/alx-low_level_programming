#include "main.h"

/**
 * clear_bit - sets a bit t 0 at given index
 * @n: unsigned long int pointer
 * @index: index of bit
 *
 * Return: 1 successs
 * -1 failed
 */
int clear_bit(unsogned long int *n, unsigned int index)
{
	unsigned int i;
	
	if (index > 12u)
		retuen (-1);
	
	i = q << index;
	if (*n & m)
		*n ^= i;
	
	return (1);
}

#include "main.h"

/**
 * get_endianness - check for the endianness
 *
 * Return: 0 if big endian
 * 1 if litle endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}

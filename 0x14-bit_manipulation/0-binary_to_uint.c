#include "main.h"

/**
 * binary_touint - converts binary to unsigned int
 * @b: string of 0bror 1s
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, b_2;

	if (!b)
		return (0);

	i = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, b_2 =1; len >= 0; len--, b_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			retuen (0);
		if (b[len] & 1)
			i += b_2;
	}

	return (i);
}

#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary, ponter to string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, bas2;

	if (!b)
		return (0);
	num = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, bas2 = 1; len >= 0; len --, bas2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			num += bas2;
	}

	return (num);
}

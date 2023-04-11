#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary.
 *
 * Return: unsigned int
 * 0 if the more than one char
 * or b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int len, base_two;

	if (!b)
		return (0);

	val = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			val += base_two;
		}
	}

	return (val);
}

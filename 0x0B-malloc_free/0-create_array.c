#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of an array
 * @c: inout character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
		return (NULL);

	r = malloc(sizeof(c) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		r[i] = c;

	return (r);
}

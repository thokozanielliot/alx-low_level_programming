#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: pointer to newly allocated space memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s2_len, i, j, l, k;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s2_len = j;
	if (n >= s2_len)
	{
		j = s2_len;
	}
	else
	{
		j = n;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (l = 0; l <= j; l++, k++)
		ptr[k] = s2[l];

	return (ptr);
}

#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to newly allocated space memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j +1));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (i = 0; i < j; k++, i++)
		str[k] = s2[i];

	return (str);
}

#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 if big, 1 little endian
 */
int get_endianness(void)
{
	char *str;
	int num = 1;

	str = (char *)& num;
	return (*str);
}

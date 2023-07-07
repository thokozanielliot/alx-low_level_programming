#include "main.h"

/**
 * print_binary - print binary number
 * @num: number to be printed in bnary
 *
 * Return: No return
 */
void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);
	_putchar((num & 1) + '0');
}

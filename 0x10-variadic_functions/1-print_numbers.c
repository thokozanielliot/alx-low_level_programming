#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separating numbers
 * @n: number of numbers to be printed
 *
 * Return: No retrun
 * if separator is NULL don't print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!(separator))
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

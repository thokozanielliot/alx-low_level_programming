#include "variadic_functions.h"

/**
 * print_strings - print strings passed
 * @separator: to be printed between strings
 * @n: number of strings passed
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char  *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}

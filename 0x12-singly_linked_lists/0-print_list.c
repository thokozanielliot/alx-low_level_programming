#include "lists.h"
/**
 * print_list - print all elements in the list
 * @h: single linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		number++;
	}
	return (number);
}

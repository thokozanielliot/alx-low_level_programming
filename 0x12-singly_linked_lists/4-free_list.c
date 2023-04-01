#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of the singly linked list
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *h;

	h = head;
	while (h != NULL)
	{
		h = h->next;
		free(h->str);
		free(h);
	}
}

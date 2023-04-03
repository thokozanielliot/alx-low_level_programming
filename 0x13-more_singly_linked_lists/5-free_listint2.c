#include "lists.h"

/**
 * free_listint2 - free list & set list head to NULL
 * @head: Singly linked list
 *
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp  = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}

		*head = NULL;
	}
}

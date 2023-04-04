#include "lists.h"

/**
 * sum_listint - add all the data in a list
 * @head: Singly Linked list
 *
 * Return: Sum
 * 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include "lists.h"
/**
 * sum_listint - adds node data
 * @head: list head
 * Return: node data sum
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int n = 0;

	if (!head)
		return (0);
	trav = head;
	while (trav != NULL)
	{
		n += trav->n;
		trav = trav->next;
	}
	return (n);
}

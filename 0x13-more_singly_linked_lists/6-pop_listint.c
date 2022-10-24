#include "lists.h"
/**
 * pop_listint - deletes node at beginning
 * @head: list head
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *trav;
	int n;

	if (*head == NULL)
		return (0);
	trav = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(trav);
	return (n);
}

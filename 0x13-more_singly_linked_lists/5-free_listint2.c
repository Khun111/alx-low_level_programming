#include "lists.h"
/**
 * free_listint2 - frees list and sets head to NULL
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *trav;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		trav = *head;
		*head = (*head)->next;
		free(trav);
	}
	*head = NULL;
}

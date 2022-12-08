#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;
	
	while (head)
	{
		cursor = head->next;
		free(head);
		head = cursor;
	}
}

#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: list head
 * @index: index to delete node
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head, *prev;
	unsigned int i = 0;

	if (!(*head) || !head)
		return (-1);
	if (index == 0)
	{
		*head = trav->next;
		free(trav);
	}
	else
	{
		while (i++ < index)
		{
			prev = trav;
			trav = trav->next;
		}
		prev->next = trav->next;
		free(trav);
	}
	return (1);
}

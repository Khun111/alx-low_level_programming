#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: list head
 * @index: index to delete node
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head;
	unsigned int i = 1;

	if (!(*head) || !head)
		return (-1);
	while (i < index)
	{
		trav = trav->next;
		i++;
	}
	trav->next = trav->next->next;
	free(trav->next);
	return (1);
}

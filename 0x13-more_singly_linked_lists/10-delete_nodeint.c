#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: list head
 * @index: index to delete node
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *prev;
	unsigned int i = 0, l;

	if (!head || *head == NULL)
		return (-1);
	l = listint_len(*head);
	if (l == 0 || l <= index)
		return (-1);
	trav = *head;
	if (index == 0)
	{
		*head = trav->next;
		free(trav);
		return (1);
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
		return (1);
	}
	return (-1);
}
/**
 * listint_len - list items in list
 * @h: list head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *trav = h;
	int count = 0;

	while (trav != NULL)
	{
		count++;
		trav = trav->next;
	}
	return (count);
}


#include "lists.h"
/**
 * insert_nodeint_at_index - adds at a position
 * @head: list head
 * @idx: index to add new node
 * @n: node data
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav = *head, *addidx = malloc(sizeof(listint_t));
	unsigned int i = 1, count = 0;

	if (addidx == NULL)
		return (NULL);
	addidx->n = n;
	addidx->next = NULL;
	while (trav != NULL)
	{
		count++;
		trav = trav->next;
	}
	if (idx > count)
		return (NULL);
	trav = *head;

	if (idx == 0)
	{
		addidx->next = *head;
		*head = addidx;
	}
	else
	{
		while (i < idx)
		{
			trav = trav->next;
			i++;
		}
		addidx->next = trav->next;
		trav->next = addidx;
	}
	return (addidx);
}

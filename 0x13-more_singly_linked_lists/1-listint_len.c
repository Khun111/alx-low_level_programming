#include "lists.h"
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

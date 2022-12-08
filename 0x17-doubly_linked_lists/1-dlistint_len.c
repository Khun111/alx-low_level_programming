#include "lists.h"
/**
 * dlistint_len - count list items
 * @h: list
 * Return: node number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

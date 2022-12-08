#include "lists.h"
/**
 * get_dnodeint_at_index - retrieves node at index
 * @head: list head
 * @index: index to retrieve from
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index-- > 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}

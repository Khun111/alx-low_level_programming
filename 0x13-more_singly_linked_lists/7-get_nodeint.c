#include "lists.h"
/**
 * get_nodeint_at_index - retrieves node
 * @index: position to retrieve from
 * @head: list head
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	trav = head;
	while (i++ < index)
		trav = trav->next;
	if (trav)
		return (trav);
	return (NULL);
}

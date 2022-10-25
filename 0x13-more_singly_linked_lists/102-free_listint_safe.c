#include "lists.h"

/**
 * free_listint_safe - Frees list with loops
 * @h: pointer to head
 * Return: size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *trav;
	size_t nodes, index;

	nodes = find_loop(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			trav = *h;
			*h = (*h)->next;
			free(trav);
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			trav = *h;
			*h = (*h)->next;
			free(trav);
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
/**
 * find_loop - finds nodes in loops
 * @head: head node
 * Return: number of nodes
 */
size_t find_loop(listint_t *head)
{
	listint_t *slowptr, *fastptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowptr = head->next;
	fastptr = (head->next)->next;

	while (fastptr)
	{
		if (slowptr == fastptr)
		{
			slowptr = head;
			while (slowptr != fastptr)
			{
				nodes++;
				slowptr = slowptr->next;
				fastptr = fastptr->next;
			}

			slowptr = slowptr->next;
			while (slowptr != fastptr)
			{
				nodes++;
				slowptr = slowptr->next;
			}

			return (nodes);
		}

		slowptr = slowptr->next;
		fastptr = (fastptr->next)->next;
	}

	return (0);
}

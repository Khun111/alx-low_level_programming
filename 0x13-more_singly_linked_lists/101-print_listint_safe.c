#include "lists.h"

/**
 * print_listint_safe - prints lists with loops
 * @head: head node
 *
 * Return: size of list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trav = head, *slowptr = head, *fastptr = head;
	int i = 0;

	if (head == NULL || head->next == NULL)
		exit(98);

	while (slowptr && fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;

		if (slowptr == fastptr)
		{
			slowptr = head;

			while (slowptr->next != fastptr->next)
			{
				slowptr = slowptr->next;
				fastptr = fastptr->next;
			}
			slowptr = slowptr->next;
			while (trav != NULL)
			{
				if (trav == fastptr)
				{
					printf("[%p] %d\n", (void *)trav, trav->n);
					i++;
					printf("-> [%p] %d\n", (void *)fastptr->next, fastptr->next->n);
					return (i);
				}
				else
					printf("[%p] %d\n", (void *)trav, trav->n);
				i++;
				trav = trav->next;
			}
		}
	}
	i = print_list(head);
	return (i);
}

/**
 * print_list - prints list
 * @loop: pointer to head
 *
 * Return: number of nodes
*/
size_t print_list(const listint_t *loop)
{
	const listint_t *trav = loop;
	int i = 0;

	while (trav != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)trav, trav->n);
		trav = trav->next;
	}

	return (i);
}

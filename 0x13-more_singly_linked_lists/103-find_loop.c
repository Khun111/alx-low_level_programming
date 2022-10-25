#include "lists.h"
/**
 * find_listint_loop - finds loops
 * @head: head node
 * Return: address of loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowptr, *fastptr;

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
				slowptr = slowptr->next;
				fastptr = fastptr->next;
			}
			return (slowptr);
		}

		slowptr = slowptr->next;
		fastptr = (fastptr->next)->next;
	}
	return (NULL);
}

#include "lists.h"
/**
 * add_nodeint_end - adds new node to the end
 * @head: list head
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int count = 0;
	listint_t *trav = *head;
	listint_t *addlast = malloc(sizeof(listint_t));

	if (addlast == NULL)
		return (NULL);
	addlast->n = n;
	addlast->next = NULL;
	if (*head == NULL)
		*head = addlast;
	else
	{
		while (trav->next != NULL)
		{
			trav = trav->next;
			count++;
		}
		trav->next = addlast;
	}
	return (addlast);
}

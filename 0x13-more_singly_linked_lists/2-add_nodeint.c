#include "lists.h"
/**
 * add_nodeint - adds new node to the beginning
 * @head: list head
 * @n: node data
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addfirst = malloc(sizeof(listint_t));

	if (addfirst == NULL)
		return (NULL);
	addfirst->n = n;
	addfirst->next = *head;
	*head = addfirst;
	return (addfirst);
}

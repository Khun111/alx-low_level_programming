#include "search_algos.h"

/**
 * jump_list - jumo search on linked list
 * @list: list
 * @size: number of nodes
 * @value: value to search
 * Return: node/null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t b_size = sqrt(size), i = 0;
	listint_t *trail, *lead;

	if (!list || size == 0)
		return (NULL);
	for (trail = lead = list; lead->index + 1 < size && lead->n < value;)
	{
		trail = lead;
		for (i += b_size; lead->index < i; lead = lead->next)
		{
			if (lead->index + 1 == size)
				break;
		}
		printf("Value checked at index [%li] = [%i]\n", lead->index, lead->n);
	}
	printf("Value found between indexes [%li] and [%li]\n",
trail->index, lead->index);
	for (; trail->index < lead->index && trail->n < value; trail = trail->next)
		printf("Value checked at index [%li] = [%i]\n", trail->index, trail->n);
	printf("Value checked at index [%li] = [%i]\n", trail->index, trail->n);
	return (trail->n != value ? NULL : trail);
}

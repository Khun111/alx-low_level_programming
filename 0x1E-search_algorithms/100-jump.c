#include "search_algos.h"
/**
 * jump_search - search for value
 * @array: container to look
 * @size: array size
 * @value: value to search
 * Return: index/-1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t b_size = sqrt(size), i = 0, first = 0, next = 0;

	if (!array)
		return (-1);

	for (; next < size && array[next] < value; next += b_size)
	{
		first = next;
		if (next >= size)
			break;
		printf("Value checked array[%li] = [%i]\n", first, array[first]);
	}

	printf("Value found between indexes [%li] and [%li]\n", first, next);
	next = (next >= size) ? size - 1 : next;
	for (i = first; i <= next; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

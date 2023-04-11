#include "search_algos.h"
/**
 * linear_search - search for value
 * @array: container to look
 * @size: array size
 * @value: value to search
 * Return: index/-1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	return (-1);
	for (; i < size; i++)
	{
	printf("Value checked array[%li] = [%i]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
	return (-1);
}

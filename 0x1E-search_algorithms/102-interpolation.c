#include "search_algos.h"
/**
 * interpolation_search - search for value
 * @array: container to look
 * @size: array size
 * @value: value to search
 * Return: index/-1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t east = 0, west = size - 1;
	int key;

	if (!array)
		return (-1);
	while (east <= west && value >= array[east] && value <= array[west])
	{
		key = east + ((value - array[east]) * (west - east)) /
(array[west] - array[east]);
		printf("Value checked array[%i] = [%i]\n", key, array[key]);
		if (array[key] == value)
			return (key);
		else if (array[key] < value)
			east = key + 1;
		else
			west = key - 1;
	}
	key = east + ((value - array[east]) * (west - east)) /
(array[west] - array[east]);
	printf("Value checked array[%i] is out of range\n", key);
	return (-1);
}

#include "search_algos.h"
/**
 * advanced_binary - search for value
 * @array: container to look
 * @value: value to search
 * @size: array size
 * Return: index/-1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t beg = 0, end = size - 1;

	return (binary_recurse(array, beg, end, value));
}

/**
 * binary_recurse - search for value
 * @array: container to look
 * @beg: lower part
 * @end: upper part
 * @value: value to search
 * Return: index/-1
 */

int binary_recurse(int *array, size_t beg, size_t end, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);
	mid = (beg + end) / 2;

	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
		printf("%i%s", array[i], i != end ? ", " : "\n");
	if (array[mid] == value)
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	if (array[beg] != array[end])
	{
		if (array[mid] >= value)
			return (binary_recurse(array, beg, mid, value));
		else
			return (binary_recurse(array, mid + 1, end, value));

	}

	return (-1);
}

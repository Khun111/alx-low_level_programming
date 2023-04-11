#include "search_algos.h"
/**
 * binary_search - search for value
 * @array: container to look
 * @size: array size
 * @value: value to search
 * Return: index/-1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t mid, i, beg = 0, end = size - 1;

    if (!array)
	return (-1);
    while (beg <= end)
    {
	mid = (beg + end) / 2;
	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
	{
	    printf("%d", array[i]);
	    if (i != end)
		printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
	    return (mid);
	else if (array[mid] > value)
	    end = mid - 1;
	else
	    beg = mid + 1;
    }
    return (-1);
}

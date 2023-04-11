#include "search_algos.h"
/**
 * exponential_search - search for value
 * @array: container to look
 * @size: array size
 * @value: value to search
 * Return: index/-1
 */

int exponential_search(int *array, size_t size, int value)
{
    size_t i = 1, beg, end;

    if (!array)
	return (-1);
    if (array[0] == value)
	return (0);
    for (; i < size && array[i] < value; i *= 2)
	printf("Value checked array[%li] = [%i]\n", i, array[i]);
    beg = i / 2;
    end = (i < size) ? i : size - 1;
    printf("Value found between indexes [%li] and [%li]\n", beg, end);
    return (mybinary_search(array, beg, end, value));

    return (-1);
}

/**
 * mybinary_search - search for value
 * @array: container to look
 * @beg: lower part
 * @end: upper part
 * @value: value to search
 * Return: index/-1
 */

int mybinary_search(int *array, size_t beg, size_t end, int value)
{
    size_t mid, i;

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

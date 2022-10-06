#include "main.h"
#include <stdlib.h>
/**
 * array_range - create arr from min to max
 * @min: param
 * @max: param
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i, j, size = (max - min) + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for(j = 0, i = min; i <= max; i++)
		arr[j++] = i;
	return (arr);
}

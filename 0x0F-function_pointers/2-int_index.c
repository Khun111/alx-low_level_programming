#include "function_pointers.h"
/**
 * int_index - call the function with a pointer
 * @array: param
 * @size: array size
 * @cmp: function pointer
 * Return: index if true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

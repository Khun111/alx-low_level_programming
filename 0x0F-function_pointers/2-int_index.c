#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (array == NULL || cmp == NULL || size < 0)
		return (-1);
	for (; i < size; i++)
		if(cmp(array[i]))
			return (i);
	return (-1);
	
}

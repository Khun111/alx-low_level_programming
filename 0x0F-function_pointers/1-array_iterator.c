#include "function_pointers.h"
/**
 * array_iterator - call the function with a pointer
 * @array: param
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (; size-- > 0; array++)
		action(*array);
}

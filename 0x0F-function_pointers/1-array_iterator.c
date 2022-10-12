#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (; size-- > 0; array++)
		action(*array);
}

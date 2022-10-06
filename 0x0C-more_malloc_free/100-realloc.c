#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		rptr = malloc(new_size);
		if (rptr == NULL)
			return (NULL);
	}
	rptr = malloc(new_size);
	if (rptr == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
	{
		*(rptr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (rptr);
}

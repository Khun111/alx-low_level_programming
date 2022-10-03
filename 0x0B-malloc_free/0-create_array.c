#include <stdlib.h>
#include "string.h"
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));
	unsigned int i = 0;
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (; i < size; i++)
		*(s + i) = c;
	return (s);
}

#include <stdlib.h>
#include "string.h"
char *_strdup(char *str)
{
	int size = strlen(str) + 1;
	int i = 0;
	char*s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (; *(str + i); i++)
		*(s + i) = *(str + i);
	*(s + i) = '\0';
	return (0);
}

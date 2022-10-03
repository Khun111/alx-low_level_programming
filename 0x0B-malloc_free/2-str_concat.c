#include <stdlib.h>
#include "string.h"
char *str_concat(char *s1, char *s2)
{
	int i, v1 = strlen(s1), v2 = strlen(s2), size = v1 + v2 + 1;
	char *s;
	if (s1 == NULL || s2 == NULL)
		s = "";
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; *(s2 + i); i++, v1++)
		s1[v1] = s2[i];
	s1[v1] = '\0';
	s = s1;
	return (s);
}

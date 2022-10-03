#include "main.h"
#include <stdlib.h>
#include "string.h"
/**
 * str_concat - function
 * @s1: param
 * @s2: param
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, v1, v2, size;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	v1 = strlen(s1), v2 = strlen(s2), size = v1 + v2 + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0, j = 0; i < size; i++)
	{
		if (i < v1)
			s[i] = s1[i];
		else
			s[i] = s2[j++];
	}
	return (s);
}

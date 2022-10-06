#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * string_nconcat - add n number of s2 to s1
 * @s1: param
 * @s2: param
 * @n: param
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size, l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l2)
		n = l2;
	size = l1 + n;
	s = malloc(size + 1);
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strncat(s, s2, n);
	return (s);
}

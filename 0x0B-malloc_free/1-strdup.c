#include "main.h"
#include <stdlib.h>
#include "string.h"
/**
 * _strdup - function
 * @str: param
 * Return: string
 */
char *_strdup(char *str)
{
	int size, i = 0;
	char*s

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (; *(str + i); i++)
		*(s + i) = *(str + i);
	return (s);
}

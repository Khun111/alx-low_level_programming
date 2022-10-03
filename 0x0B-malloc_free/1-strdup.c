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
	int size = strlen(str) + 1;
	int i = 0;
	char*s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (; *(str + i); i++)
		*(s + i) = *(str + i);
	return (s);
}

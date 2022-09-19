#include "main.h"
/**
 * _strcpy - copy
 * @dest: first param
 * @src: second
 * Return: copied
 */
char *_strcpy(char *dest, char *src)
{
	int j, i = 0;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}

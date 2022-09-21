#include "main.h"
/**
 * _strncat - appends
 * @dest: first
 * @src: second
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;
	
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

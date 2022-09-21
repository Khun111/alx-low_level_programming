#include "main.h"
/**
 * _strncpy - copy string
 * @dest: first
 * @src: second
 * @n: third
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

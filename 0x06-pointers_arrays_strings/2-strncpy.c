#include "main.h"
/**
 * _strncpy - copy string
 * @dest: first
 * @src: second
 * @n: third
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	for (;i < n; i++)
		dest[i] = src[i];
	return (dest);
}

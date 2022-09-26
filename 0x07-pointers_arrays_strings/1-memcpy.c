#include "main.h"
/**
 * _memcpy - copies specified number of bytes
 * @dest: destination
 * @src: source
 * @n: byte number
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

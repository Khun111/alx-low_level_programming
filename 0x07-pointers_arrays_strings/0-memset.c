#include <stdio.h>
/**
 * _memset - replace
 * @s: string to be manipulated
 * @b: character to fill
 * @n: number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while((i < n))
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

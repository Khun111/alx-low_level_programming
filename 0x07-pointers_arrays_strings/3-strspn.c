#include "main.h"
/**
 * _strspn - length of matching substring
 * @s: first
 * @accept: second
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0, l;

	for (; *(s + i); i++)
	{
		l = 0;
		j = 0;
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				l = 1;
				break;
			}
			j++;
		}
		if (l == 0)
			break;
		k++;
	}
	return (k);
}

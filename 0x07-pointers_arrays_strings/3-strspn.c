#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	for (; *(s + i); i++)
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		if (*(s + i) != *(accept + j))
			k++;
	}
	return (k);
}

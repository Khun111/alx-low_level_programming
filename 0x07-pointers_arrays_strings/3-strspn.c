#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	for (; *(s + i); i++)
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				k++;
			j++;
		}
	}
	return (k);
}

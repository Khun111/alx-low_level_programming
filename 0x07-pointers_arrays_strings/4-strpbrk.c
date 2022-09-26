#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}

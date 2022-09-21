#include "main.h"
/**
 * leet - 1337
 * @s: param
 * Return: string
 */
char *leet(char *s)
{
	int i, o = 0;
	char leet[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};

	while (s[o])
	{
		i = 0;
		for (; i < 5; i++)
		{
			if ((s[o] == leet[i]) || (s[o] == leet[i] - 32))
				s[o] = num[i];
		}
		o++;
	}
	return (s);
}

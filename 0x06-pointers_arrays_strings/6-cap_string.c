#include "main.h"
/**
 * cap_string - capitalize
 * @s: param
 * Return: string
 */
char *cap_string(char *s)
{
	char sym[] = {9, 32, '\n', ',', '"', '(', ')', '{', '}', '?', '.', '!', ';'};
	int o = 0, i;

	for (; s[o] != '\0'; o++)
	{
		i = 0;
		while (i < 13)
		{
			if ((o == 0 || s[o - 1] == sym[i]) && (s[o] > '`' && s[o] < '{'))
				s[o] = s[o] - 32;
			i++;
		}
	}
	return (s);
}

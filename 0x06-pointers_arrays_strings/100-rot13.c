#include "main.h"
/**
 * rot13 - encoding
 * @s: param
 * Return: 0
 */
char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] > '`' && s[i] < '{') || (s[i] > '@' && s[i] < '['))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
	}
	return (s);
}

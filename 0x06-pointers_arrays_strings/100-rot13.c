#include "main.h"
/**
 * rot13 - encoding
 * @s: param
 * Return: 0
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] > '`' && s[i] < '{') || (s[i] > '@' && s[i] < '['))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}

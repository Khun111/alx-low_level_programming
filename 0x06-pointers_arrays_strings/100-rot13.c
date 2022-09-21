#include "main.h"
/**
 * rot13 - encoding
 * @s: param
 * Return: 0
 */
char *rot13(char *s)
{
	char lete[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (lete[j] != '\0')
		{
			if (s[i] == lete[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

#include "main.h"
/**
 * string_toupper - uppercase
 * @s: param
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;
	for (; s[i] != '\0'; i++)
		if (s[i] > '`' && s[i] < '{')
			s[i] = s[i] - 32;
	return (s);
}

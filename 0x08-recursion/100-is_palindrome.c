#include "main.h"
#include "string.h"
/**
 * _palin - check for palindrome
 * @s: string
 * @i: index
 * Return: 0/1
 */
int _palin(char *s, int i)
{
	int len = strlen(s) - (i + 1);

	if (s[len] == s[i])
	{
		if ((i + 1 == len) || (i == len))
			return (1);
		return (_palin(s, i + 1));
	}
	return (0);
}
/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 0/1
 */
int is_palindrome(char *s)
{
	return (_palin(s, 0));
}

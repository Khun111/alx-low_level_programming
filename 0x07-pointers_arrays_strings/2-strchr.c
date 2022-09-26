#include "main.h"
/**
 * _strchr - check for first occurence
 * @s: string to check
 * @c: char to check
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\n')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}

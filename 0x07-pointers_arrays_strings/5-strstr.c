#include "main.h"
/**
 * _strstr - substring in string
 * @haystack: main
 * @needle: sub
 * Return: sub pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (; *(haystack + i) != '\0'; i++)
	{
		j = 0;
		for (; *(needle + j) != '\0'; j++)
			if (*(haystack + (i + j)) != *(needle + j))
				break;
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return (0);
}

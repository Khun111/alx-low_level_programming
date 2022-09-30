#include "main.h"
/**
 * _strcmp - compare
 * @s1: first
 * @s2: second
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

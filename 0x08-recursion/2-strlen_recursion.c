#include "main.h"
/**
 * _strlen_recursion - puts
 * @s: param
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = (1 + (_strlen_recursion(s + 1)));
	}
	return (i);
}

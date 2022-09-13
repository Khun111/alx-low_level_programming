#include "main.h"
/**
 * _islower - check
 * Return: 1/0
 * @c: param
 */
int _islower(int c)
{
	if (c > '`' && c < '{')
		return (1);
	else
		return (0);
}

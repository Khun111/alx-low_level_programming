#include "main.h"
/**
 * _islower - check
 * @c: param
 * Return: 1/0
 */
int _isalpha(int c)
{
	if ((c > '`' && c < '{') || (c > '@' && c < '['))
		return (1);
	else
		return (0);
}

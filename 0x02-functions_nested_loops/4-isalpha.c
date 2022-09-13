#include "main.h"
#include "_putchar.c"
/**
 * _islower - check
 * Return: 1/0
 */
int _isalpha(int c)
{
	if ((c > '`' && c < '{') || (c > '@' && c < '['))
		return (1);
	else
		return (0);
}

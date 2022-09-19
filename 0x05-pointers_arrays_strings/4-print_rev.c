#include "main.h"
/**
 * print_rev  - reverse string
 * @s: param
 */
void print_rev(char *s)
{
	char rev[1000];
	int j, k, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	for (k = 0; k < i; k++)
	{
		rev[k] = s[j];
		_putchar(rev[k]);
		j--;
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * infinite_add - complicated
 * @n1: first
 * @n2: second
 * @r: third
 * @size_r: fourth
 * Return: string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = strlen(n1), l2 = strlen(n2), i, keep, digit;

	if ((size_r <= l1 + 1) || (size_r <= l2 + 1))
		return (0);
	if (l1 < l2)
	{
		strcpy(r, n1);
		memset(n1, '0', l2 - l1);
		strcpy(&(n1[l2 - l1]), r);
		l1 = l2;
	}
	else if (l1 > l2)
	{
		strcpy(r, n2);
		memset(n2, '0', l1 - l2);
		strcpy(&(n2[l1 - l2]), r);
	}

	keep = 0;

	for (i = l1; i > 0; i--)
	{
		digit = (n1[i -1] - '0') + (n2[i -1] - '0') + keep;
		keep = digit / 10;
		digit = digit % 10;
		r[i] = digit + '0';
	}
	if (keep != 0)
		r[0] = keep + '0';
	else
		memmove(r, &(r[1]), l1 + 1);
	return r;
}

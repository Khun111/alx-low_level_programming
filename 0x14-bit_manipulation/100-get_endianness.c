#include "main.h"
/**
 * get_endianness - detect the endianness
 * architecture of your computer
 * Return: 1/0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *s = (char *)&n;

	if (*s)
		return (1);
	return (0);
}

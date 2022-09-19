#include "main.h"
/**
 * _atoi - ascii to int
 * @s: param
 * Return: number
 */
int _atoi(char *s)
{
	int i, number = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = number * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	return (sign * number);
}

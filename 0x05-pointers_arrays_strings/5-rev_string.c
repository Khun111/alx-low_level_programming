#include "main.h"
/**
 * rev_string - reverse
 * @s: param
 */
void rev_string(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		int temp = s[j];

		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}

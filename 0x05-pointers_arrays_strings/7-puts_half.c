#include "main.h"
/**
 * puts_half - half
 * @str: param
 */
void puts_half(char *str)
{
	int mid, i = 0;

	while (str[i] != '\0')
		i++;
	mid = i / 2;
	if (i % 2 != 0)
		mid = mid + 1;
	while (mid < i)
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}

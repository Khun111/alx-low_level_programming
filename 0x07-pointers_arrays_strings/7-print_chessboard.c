#include "main.h"
/**
 * print_chessboard - what it says
 * @a: first
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		_putchar('\n');
	}
}

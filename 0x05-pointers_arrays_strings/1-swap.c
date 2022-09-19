#include "main.h"
/**
 * swap_int - swap values
 * @a: first
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int temp = a;
	*a = *b;
	*b = temp;
}

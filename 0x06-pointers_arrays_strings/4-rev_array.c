#include "main.h"
/**
 * reverse_array - rev
 * @a: first
 * @n: second
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

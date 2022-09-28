#include "main.h"
int _sqrt(int n, int b)
{
	if (b * b == n && ((b + 1) * (b + 1) > n))
		return (b);
	else if (b * b < n && ((b + 1) * (b + 1) > n))
		return (-1);
	else
		return (_sqrt(n, b + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

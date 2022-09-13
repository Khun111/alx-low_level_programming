#include "main.h"
#include "_putchar.c"
/**
 * print_int
 * @i: param
 * Return: 0
 */
void print_int(int i)
{
	if (i / 10)
		print_int(i / 10);
	_putchar('0' + (i % 10));
}
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{

	}
}
int main(void)
{
	print_int(110);
}

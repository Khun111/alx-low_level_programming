#include <unistd.h>
/**
 * _putchar - a char
 * @a: param
 * Return: number
 */
int _putchar(char a)
{
	int n = write(1, &a, 1);

	return (n);
}

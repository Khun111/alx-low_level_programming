#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;
printf("Size of a char: %li byte(s)", sizeof(a));
printf("Size of an int: %li byte(s)", sizeof(b));
printf("Size of a long int: %li byte(s)", sizeof(c));
printf("Size of a long long int: %li byte(s)", sizeof(d));
printf("Size of a float: %li byte(s)", sizeof(e));
return (0);

}

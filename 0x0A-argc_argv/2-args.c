#include <stdio.h>
int main(int count, char *name[])
{
	int k = 0;

	for (; k < count; k++)
		printf("%s\n", name[k]);
	return (0);
}

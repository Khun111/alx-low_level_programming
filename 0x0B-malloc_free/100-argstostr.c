#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: param
 * @av: param
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, size = ac, track;
	char *ptr;
	/* check for invalid parameter */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* get length and determine appropriate memoryto allocate */
	for (; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			size++;
	ptr = malloc((size + 1) * sizeof(char));
	/* ascertain that it's a valid address */
	if (ptr == NULL)
		return (NULL);
	/* loop through entire args as a single string switching null for newline */
	for (i = j = track = 0; track < size; j++, track++)
	{
		if (av[i][j] == '\0')
		{
			ptr[track] = '\n';
			i++;
			j = 0;
			track++;
		}
		if (track < size - 1)
			ptr[track] = av[i][j];
	}
	/* end string with null byte and return it */
	ptr[track] = '\0';
	return (ptr);
}

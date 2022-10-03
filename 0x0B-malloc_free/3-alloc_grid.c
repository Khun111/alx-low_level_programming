#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: param
 * @height: param
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (ptr[i] != NULL)
			for (k = 0; k < width; k++)
				ptr[i][k] = 0;
	}
	return (ptr);
}

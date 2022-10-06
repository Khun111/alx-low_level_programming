#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for arr of nmemb ele
 * @nmemb: param
 * @size: param
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *aptr = NULL;
	unsigned int i = 0;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	aptr = malloc(nmemb * size);
	if (aptr == NULL)
		return (NULL);
	for(; i < nmemb; i++)
		aptr[i] = 0;
	return (aptr);
}

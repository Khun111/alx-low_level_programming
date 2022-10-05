#include "main.h"
#include <stdlib.h>

/**
 * free_str - frees a 2 dimensional char array
 * @grid: array of strings
 * @height: height
 */
void free_str(char **grid, unsigned int height)
{
	unsigned int i;
	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}

/**
 * strtow - string to words
 * @str: string
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **splitStr;
	unsigned int n, word, i, j, cnt;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (n = word = 0; *(str + n); n++)
	{
		if (*(str + n) != ' ' && (str[n + 1] == ' ' || str[n + 1] == '\0'))
			word++;
	}
	splitStr = malloc((word + 1) * sizeof(char *));
	if (splitStr == NULL || word == 0)
	{
		free(splitStr);
		return (NULL);
	}
	for (i = cnt = 0; i < word; i++)
	{
		for (n = cnt; str[n] != '\0'; n++)
		{
			if (*(str + n) == ' ')
				cnt++;
			if (*(str + n) != ' ' && (str[n + 1] == ' ' || str[n + 1] == '\0'))
			{
				splitStr[i] = malloc((n - cnt + 1) * sizeof(char));
				if (splitStr[i] == NULL)
				{
					free_str(splitStr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; cnt <= n; cnt++, j++)
			splitStr[i][j] = *(str + cnt);
		splitStr[i][j] = '\0';
	}
	splitStr[i] = NULL;
	return (splitStr);
}

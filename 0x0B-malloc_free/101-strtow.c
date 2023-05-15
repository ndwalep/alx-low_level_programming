#include <stdlib.h>
#include "main.h"

/**
 * count_word - the helper function to count the number of words in string
 * @s: string to be evaluated
 *
 * Return:the number of words
 */
int count_word(char *s)
{
	int pesh, k, c;

	pesh = 0;
	c = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == ' ')
			pesh = 0;
		else if (pesh == 0)
		{
			pesh = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - splits string into words
 * @str: the string to split
 *
 * Return: pointer to array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **peshy, *tmp;
	int p, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	peshy = (char **) malloc(sizeof(char *) * (words + 1));
	if (peshy == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (c)
			{
				end = p;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				peshy[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}

	peshy[k] = NULL;

	return (peshy);
}

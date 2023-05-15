#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main Entry
 * @ac: int input
 * @av: Double pointer array
 * Return: 0 Success
 */
char *argstostr(int ac, char **av)
{
	int p, k, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (k = 0; av[p][k]; k++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
	for (k = 0; av[p][k]; k++)
	{
		str[r] = av[p][k];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

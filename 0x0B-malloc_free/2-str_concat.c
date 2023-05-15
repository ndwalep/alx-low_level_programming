#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Get end of an input and add together for size
 * @s1: Input One to concat
 * @s2: Input Two to concat
 * Return: The concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int p, kc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = kc = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[kc] != '\0')
		kc++;
	conct = malloc(sizeof(char) * (p + ki + 1));

	if (conct == NULL)
		return (NULL);
	p = ki = 0;
	while (s1[p] != '\0')
	{
		conct[p] = s1[p];
		p++;
	}

	while (s2[kc] != '\0')
	{
		conct[p] = s2[kc];
		p++, kc++;
	}
	conct[p] = '\0';
	return (conct);
}

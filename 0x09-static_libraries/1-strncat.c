#include "main.h"
/**
 * _strncat – Concatenate the two strings
 * Using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int j;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[p] = src[j];
	p++;
	j++;
	}
	dest[p] = '\0';
	return (dest);
}

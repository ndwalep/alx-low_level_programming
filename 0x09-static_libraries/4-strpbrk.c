#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
		if (*s == accept[n])
		return (s);
		}
	s++;
	}

return ('\0');
}

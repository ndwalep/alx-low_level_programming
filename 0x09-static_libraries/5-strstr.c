#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *z = needle;

		while (*l == *z && *z != '\0')
		{
			l++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}

	return (0);
}

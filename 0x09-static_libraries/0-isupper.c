#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

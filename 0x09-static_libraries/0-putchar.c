#include <unistd.h>

/**
 * _putchar - write Character c to stdout
 * @c: Character to print
 *
 * Return: 1 on Success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

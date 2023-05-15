#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write Character c to Stdout
 * @c: The character to print
 *
 * Return: Success 1.
 * On error, return -1, and errno is set Appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

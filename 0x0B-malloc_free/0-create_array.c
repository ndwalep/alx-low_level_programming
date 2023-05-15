#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of size size and an assign char c
 * @size: Size of Array
 * @c: Char to Assign
 * Description: Create Array of size size and assign char c
 * Return: Pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; p < size; p++)
		str[p] = c;
	return (str);
}

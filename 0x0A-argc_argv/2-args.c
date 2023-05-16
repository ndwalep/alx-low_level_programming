#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}

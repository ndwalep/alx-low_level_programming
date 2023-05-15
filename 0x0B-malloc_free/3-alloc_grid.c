#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: Width input
 * @height: Height input
 * Return: The Pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pee;
	int f, e;

	if (width <= 0 || height <= 0)
		return (NULL);

	pee = malloc(sizeof(int *) * height);

	if (pee == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		pee[f] = malloc(sizeof(int) * width);

		if (pee[f] == NULL)
		{
			for (; f >= 0; f--)
				free(pee[f]);

			free(pee);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (e = 0; e < width; e++)
			pee[f][e] = 0;
	}

	return (pee);
}

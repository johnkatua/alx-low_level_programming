#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - It takes two arguments
 * It creates a two dimensional array of integer
 * @width: width
 * @height: height
 * Return: returns pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **c;

	if (width <= 0 || height <= 0)
		return (NULL);
	c = (int **)malloc(sizeof(int *) * height);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		c[a] = (int *)malloc(sizeof(int) * width);
		if (c[i] == NULL)
		{
			for (b = 0; b < a; b++)
				free(c[b]);
			free(c);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}

#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - a function that returns a pointer to a 2 dimensional array
 *@width: the width of the array
 *@height: the height of the array
 *Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w, h;

	w = 0;
	h = 0;

	if (width == 0 || height == 0 || width < 0 || height < 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (width * height));

	if (array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			array[h][w];
		}
	}
	return (array);
}

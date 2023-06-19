#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - make a matrix of zeros
 * @width: the width of the adress
 * @height: the height of the matrix
 * Return: it depends of the functio somtimes NULL somtimes ptr
 */
int **alloc_grid(int width, int height)
{
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	else
	{
		int **ptr;
		int i;

		ptr = (int **)calloc(height, sizeof(int *));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < width; i++)
			{
				ptr[i] = (int *)calloc(width, sizeof(int));
				if (ptr[i] == NULL)
				{
					for (; i >= 0; i--)
					{
						free(ptr[i]);
					}
					free(ptr);
					return (NULL);
				}
			}
		}
		return (ptr);
	}
}

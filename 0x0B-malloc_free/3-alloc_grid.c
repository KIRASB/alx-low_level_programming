#include "main.h"
#include <stdlib.h>
/**
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

		ptr = (int**)calloc(height, sizeof(int*));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < width; i++)
			{
				ptr[i] = (int*)calloc(width, sizeof(int));
				if (ptr[i] == NULL)
                        {
				for (; i >= 0; i--)
				{
				free(ptr[i]);
				}
				free (ptr);
                                return (NULL);
                        }
			}
		}
			return (ptr);
	}
}

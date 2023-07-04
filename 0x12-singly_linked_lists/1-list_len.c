#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elemment in a list liked
 * @h: pointer to the list_t list
 * Return: number of elemment
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

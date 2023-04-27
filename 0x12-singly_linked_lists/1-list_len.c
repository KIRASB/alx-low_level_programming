#include <stdlib.h>
#include "lists.h"

/**
 * list_len - give the number of element as return
 * @h: pointer to the list
 *
 * Return: number of elements in h
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

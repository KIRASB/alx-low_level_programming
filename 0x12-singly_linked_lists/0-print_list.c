#include <stdio.h>
#include "lists.h"

/**
 * print_list - the function print all the elemment of the linked list
 * @h: pointer of the list i want to print
 * Return: the number of node that I printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

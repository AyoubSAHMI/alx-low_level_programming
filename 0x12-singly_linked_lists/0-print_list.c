#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of a singly linked list
 * Return: number of nodes, or [0] (nil) if str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}

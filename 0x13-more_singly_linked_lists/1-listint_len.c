#include "lists.h"

/**
 * listint_len - Finds the number of elements in a list.
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h= h->next;
		elements++;
	}
	return (elements);
}

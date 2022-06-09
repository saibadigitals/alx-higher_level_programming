#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlisting_t list
 * @h: the point to the node head
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; h = h->next)
	{
		len++;
	}

	return (len);

}

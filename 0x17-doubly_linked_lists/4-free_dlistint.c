#include "lists.h"

/**
 * free_dlistint - frees a dlisting_t list
 * @head: the point to the node head
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}

#include "lists.h"

/**
 *  add_dnodeint- adds a new node at the beginning of a dlistint_t list
 * @head: the point to the node head
 * @n: the integer value as data
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->next = *head;
			new->prev = NULL;

			if (*head)
				(*head)->prev = new;
			*head = new;
		}
	}

	return (new);

}

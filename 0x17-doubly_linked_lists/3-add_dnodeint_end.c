#include "lists.h"

/**
 *  add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the point to the node head
 * @n: the integer value as data
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->next = NULL;

			tail = *head;

			if (tail)
			{
				while (tail->next)
					tail = tail->next;

				new->prev = tail;
				tail->next = new;
			}
			else
			{
				new->prev = NULL;
				*head = new;
			}
		}
	}

	return (new);

}

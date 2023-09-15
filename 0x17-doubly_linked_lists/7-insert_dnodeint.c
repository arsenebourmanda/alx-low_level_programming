#include "lists.h"

/**
 * insert_dnodeint_at_index - new node inserted at given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouv;
	dlistint_t *tete;
	unsigned int a;

	nouv = NULL;
	if (idx == 0)
		nouv = add_dnodeint(h, n);
	else
	{
		tete = *h;
		a = 1;
		if (tete != NULL)
			while (tete->prev != NULL)
				tete = tete->prev;
		while (tete != NULL)
		{
			if (a == idx)
			{
				if (tete->next == NULL)
					nouv = add_dnodeint_end(h, n);
				else
				{
					nouv = malloc(sizeof(dlistint_t));
					if (nouv != NULL)
					{
						nouv->n = n;
						nouv->next = tete->next;
						nouv->prev = tete;
						tete->next->prev = nouv;
						tete->next = nouv;
					}
				}
				break;
			}
			tete = tete->next;
			a++;
		}
	}
	return (nouv);
}

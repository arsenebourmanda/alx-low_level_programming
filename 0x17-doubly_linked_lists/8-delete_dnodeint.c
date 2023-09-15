#include "lists.h"

/**
 * delete_dnodeint_at_index - deletion of node
 *
 * @head: list's head
 * @index: new node's index
 * Return: 1 indicates success, -1 indicates failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *teteP;
	dlistint_t *teteD;
	unsigned int a;

	teteP = *head;

	if (teteP != NULL)
		while (teteP->prev != NULL)
			teteP = teteP->prev;
	a = 0;
	while (teteP != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = teteP->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				teteD->next = teteP->next;

				if (teteP->next != NULL)
					teteP->next->prev = teteD;
			}

			free(teteP);
			return (1);
		}
		teteD = teteP;
		teteP = teteP->next;
		a++;
	}

	return (-1);
}

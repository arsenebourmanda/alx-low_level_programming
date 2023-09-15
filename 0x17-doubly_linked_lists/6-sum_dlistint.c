#include "lists.h"

/**
 * sum_dlistint - the sum of all the data is returned
 *
 * @head: the list's head
 * Return: data's sum
 */
int sum_dlistint(dlistint_t *head)
{
	int tot;

	tot = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			tot += head->n;
			head = head->next;
		}
	}

	return (tot);
}

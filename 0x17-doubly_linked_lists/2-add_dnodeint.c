#include "lists.h"

/**
 * add_dnodeint_end - addation of a new node
 *
 * @head: list's head
 * @n: element's value
 * Return: new element's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tete;
	dlistint_t *nouv;

	nouv = malloc(sizeof(dlistint_t));
	if (nouv == NULL)
		return (NULL);

	nouv->n = n;
	nouv->next = NULL;
	tete = *head;
	if (tete != NULL)
	{
		while (tete->next != NULL)
			tete = tete->next;
		tete->next = nouv;
	}
	else
	{
		*head = nouv;
	}
	nouv->prev = tete;
	return (nouv);
}

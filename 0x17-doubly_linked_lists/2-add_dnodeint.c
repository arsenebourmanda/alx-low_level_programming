#include "lists.h"

/**
 * add_dnodeint_end - addation of a new node
 *
 * @head: list's head
 * @n: element's value
 * Return: new element's address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tete;
	dlistint_t *nouv;

	nouv = malloc(sizeof(dlistint_t));
	if (nouv == NULL)
		return (NULL);
	nouv->n = n;
	nouv->prev = NULL;
	tete = *head;
	if (tete != NULL)
	{
		while (tete->prev != NULL)
			tete = tete->prev;
	}
	nouv->next = tete;
	if (tete != NULL)
		tete->prev = nouv;
	*head = nouv;
	return (nouv);
}

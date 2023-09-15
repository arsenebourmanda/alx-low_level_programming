#include "lists.h"
/**
 * get_dnodeint_at_index - nth node is returned
 * @head: points to the list's head
 * @index: node's index to search for, from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int taille;
	dlistint_t *tp;

	taille = 0;
	if (head == NULL)
	return (NULL);

	tp = head;
	while (tp)
	{
	if (index == taille)
	return (tp);
	taille++;
	tp = tp->next;
	}
	return (NULL);
}

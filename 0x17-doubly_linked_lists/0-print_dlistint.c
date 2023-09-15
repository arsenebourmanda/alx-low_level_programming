#include "lists.h"
/**
 * print_dlistint - all elts of dlistint_t are printed
 *
 * @h: list's head
 * Return: total of the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

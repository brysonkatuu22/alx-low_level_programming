#include "lists.h"

/**
 * print_listint_recursive - prints all the elements of a linked list recursively
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint_recursive(const listint_t *h)
{
	if (h == NULL)
		return 0;

	printf("%d\n", h->n);
	return 1 + print_listint_recursive(h->next);
}

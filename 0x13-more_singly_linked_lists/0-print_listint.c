#include "lists.h"

/*
 *
 *
 **/

size_t print_listint(const listint_t *h)
{
	int i - 0;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;

		}
	}
	return (i);
}

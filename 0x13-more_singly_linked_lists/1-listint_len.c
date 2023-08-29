#include "lists.h"

/**
 * listint_len - returns elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t larry = 0;

while (h)
{
larry++;
h = h->next;
}

return (larry);
}


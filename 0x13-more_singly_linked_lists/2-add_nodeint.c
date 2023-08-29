#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in new node
 *
 * Return: pointer to the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *larry;
larry = malloc(sizeof(listint_t));
if (!larry)
return (NULL);

larry->n = n;
larry->next = *head;
*head = larry;

return (larry);
}


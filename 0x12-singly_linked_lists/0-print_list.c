#include <stdio.h>
#include "lists.h"
/*
 * print_list - Prints elements of list
 * @h: points to list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t b = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
++b;
}
return b;
}

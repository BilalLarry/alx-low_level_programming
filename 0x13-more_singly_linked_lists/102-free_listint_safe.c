#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: point to the first node in the linked list
 *
 * Return:  elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
        size_t bil = 0;
        int diff;
        listint_t *temp;

        if (!h || !*h)
                return (0);

        while (*h)
        {
                diff = *h - (*h)->next;
                if (diff > 0)
                {
                        temp = (*h)->next;
                        free(*h);
                        *h = temp;
                        bil++;
                }
                else
                {
                        free(*h);
                        *h = NULL;
                        bil++;
                        break;
                }
        }

        *h = NULL;
return (bil);
}

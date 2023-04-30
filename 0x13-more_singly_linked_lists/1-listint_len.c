#include "lists.h"

/**
* listint_len - that return number of elements in the
* linked listint_t list
*
* @h: is the head of the node list
*
* Return: return the  number of the nodes.
*/

size_t listint_len(const listint_t *h)
{
size_t cnt = 0;

for (; h; h = h->next)
	cnt++;
return (cnt);
}

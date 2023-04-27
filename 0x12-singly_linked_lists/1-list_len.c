#include "lists.h"

/**
* list_len - returns the number of elements that
* in the link linked list
*
* @h: Pointer to head of the linked list
*
* Return: Number of elements in the link list
*/

size_t list_len(const list_t *h)
{
int itercnt;

for (itercnt = 0; h; h = h->next)
	itercnt++;
return (itercnt);
}

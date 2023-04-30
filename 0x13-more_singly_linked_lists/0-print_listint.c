#include "lists.h"

/**
* print_listint - a function to print all of
* the elements of liistint list
*
* @h: is the  head of the list in the node
*
* Return: return number of the node
*/

size_t print_listint(const listint_t *h)
{
size_t cnt = 0;

for (; h; h = h->next)
{
	printf("%d\n", h->n);
	cnt++;
}
return (cnt);
}

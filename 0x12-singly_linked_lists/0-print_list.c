#include "lists.h"

/**
* print_list - thats prints all
* the elements of a linked
*
* @h: Pointer to the head of the list
*
* Return: return the number of nodes are printed
*/

size_t print_list(const list_t *h)
{
int totalcount;

totalcount = 0;

while (h)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	totalcount++;
}
return (totalcount);
}

#include "lists.h"

/**
* get_nodeint_at_index - that a function thats
* return the nth node of the linked list.
* @head: The head node in the linked list.
* @index: Index of the node.
*
* Return:Returns the nth node of a listint_t linked list
* else return NULL if there is no node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int xnum;
xnum = 0;

for ( ; head; head = head->next)
{
	if (index == xnum)
		return (head);
	xnum++;
}
return (NULL);
}

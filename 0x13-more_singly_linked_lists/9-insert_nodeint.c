#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node in the
* given position
*
* @head: thats a pointer to a header of node in the linked list
* @idx: Index of  list where a new node should be add
* @n: it is the new node
*
* Return: return address of the new node,
* else NULL if it fail
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t)), *finish = *head;
unsigned int cnt = 0;

if (!new)
	return (NULL);
new->n = n;
if (idx == 0)
{
	new->next = *head;
	*head = new;
	return (new);
}
for ( ; finish; finish = finish->next)
{
	if (idx == cnt + 1)
	{
		new->next = finish->next;
		finish->next = new;
	}
	cnt++;
}
if (idx > cnt)
	return (NULL);
return (new);
}

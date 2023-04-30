#include "lists.h"

/**
* add_nodeint_end - added new node to the end of the listint_t list
*
* @head: that is a point to head node in the list.
* @n: int for new node
*
* Return: return address of the new element,
* else NULL if it fail.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t)), *linkend = *head;

if (!new)
	return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
	*head = new;
	return (new);
}
else
{
	while (linkend->next)
		linkend = linkend->next;
	linkend->next = new;
	return (new);
}
}

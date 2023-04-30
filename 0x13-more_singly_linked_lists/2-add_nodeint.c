#include "lists.h"

/**
* add_nodeint - adds a new node in the
* starting of the listint_t list
*
* @head: that a pointer  to head  of the node in the list
* @n: n is number for new node
*
* Return: return the adress of the new element
* else return NULL if it fail.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

#include "lists.h"

/**
* pop_listint - that a function
* deletes the head node of linked list
*
* @head: that is a pointer to the head node of  the linked list
*
* Return: return x
*/

int pop_listint(listint_t **head)
{
int x;
x = 0;
listint_t *tmp = *head;

if (*head)
{
	x = (*head)->x;
	*head = (*head)->next;
	free(tmp);
}
return (x);
}

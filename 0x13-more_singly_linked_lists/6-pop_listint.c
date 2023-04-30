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
listint_t *tmp;
int x;
x = 0;
if (!head || !*head)
return (0);
x = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (x);
}


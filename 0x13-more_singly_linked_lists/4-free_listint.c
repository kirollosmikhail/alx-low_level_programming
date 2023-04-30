#include "lists.h"

/**
* free_listint - thats a function to frees the listint_t list
*
* @head: it is the head node of list.
*
*/

void free_listint(listint_t *head)
{
if (head)
{
	free_listint(head->next);
	free(head);
}
}

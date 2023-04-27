#include "lists.h"

/**
* free_list - frees the linked list
*
* @head: pointer to list to free it
*
*/

void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
	free(head->str);
free(head);
}
}

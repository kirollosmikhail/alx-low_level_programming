#include "4-free_listint.c"
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  *
  * @head: it is a pointer to
  * the head of node in the list
  *
  */

void free_listint2(listint_t **head)
{
if (head)
{
    free_listint(*head);
    *head = NULL;
}
}

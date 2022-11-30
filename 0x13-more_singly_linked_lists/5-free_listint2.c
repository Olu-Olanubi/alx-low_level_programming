#include "lists.h"
/**
 * free_listint2 - function frees a linked list, sets head to NULL
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL) /* if there's no list */
return;
while (*head != NULL) /* keep track of head node and free */
{
ptr = *head;
*head = ptr->next; /* move to next node while ptr frees prior */
free(ptr);
}
}

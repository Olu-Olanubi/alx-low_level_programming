#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 * Return: node data (integer)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
temp = *head; /* Put given linked list in temp list */
n = 0;
if (*head == NULL) /* check that there's a linked list */
return (n);
*head = temp->next; /* save, swap and free */
n = temp->n;
free(temp);
return (n);
}

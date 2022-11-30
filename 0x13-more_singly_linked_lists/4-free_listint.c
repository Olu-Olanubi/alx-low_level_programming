#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: linked list
 */
void free_listint(listint_t *head)
{
listint_t *node;
if (head == NULL) /* account for no linked list */
return;
while (head != NULL) /* Keep track of head node and free */
{
node = head;
head = head->next; /* move to next node as prior node is freed */
free(node);
}
}

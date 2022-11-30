#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int i;
if (head == NULL) /* check that there's a linked list */
return (NULL);
node = head;
i = 0;
while (node != NULL)
{
if (i == index) /* check that index was within list size */
return (node);
node = node->next;
i++;
}
return (NULL);
}

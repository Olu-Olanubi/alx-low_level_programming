#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node, *tmp;
/* account for empty pointer */
if (head == NULL)
return (NULL);
/* assign memory and values to new_node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
/* if idx == 0 */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/* iterate */
tmp = *head;
while (i < (idx - 1))
{
tmp = tmp->next;
i++;
if (tmp == NULL) /* if idx is out of range */
{
free(new_node);
return (NULL);
}
}
/* link into list */
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}

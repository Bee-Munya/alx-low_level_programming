#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at the given index of a listint_t linked list
* @head: pointer to a pointer to the first node of the list
* @index: index of the node to be deleted (starting at 0)
*
* Return: 1 if successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (*head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
for (i = 0; i < index - 1 && current != NULL; i++)
current = current->next;
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

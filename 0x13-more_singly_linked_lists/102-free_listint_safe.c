#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - Frees a listint_t list
* @h: A pointer to the head of the list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;
if (h == NULL || *h == NULL)
return (count);
current = *h;
while (current != NULL)
{
count++;
if (current < current->next)
{
tmp = current;
current = current->next;
free(tmp);
}
else
{
free(current);
*h = NULL;
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
}
return (count);
}


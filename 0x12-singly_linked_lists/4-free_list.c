#include "lists.h"
/**
 * free_list - free allocated memory
 * @head: pointer to first node
*/
void free_list(list_t *head)
{
	list_t *trav;

		while (head != NULL)
		{
			trav = head;
			head = head->next;
			free(trav->str);
			free(trav);
		}
}

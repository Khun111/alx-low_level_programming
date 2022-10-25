#include "lists .h"
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    if (!head || !(head->next))
        return (NULL);
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return (slow);
    }
    return (NULL);
}
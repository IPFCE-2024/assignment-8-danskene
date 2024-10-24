#include <stdio.h>
#include <stdlib.h>
#include "insertion_sort.h"

node *isort(node *list)
{

    node *sorted = NULL;

    while (list != NULL)
    {
        node *current = list;
        list = list->next;

        if (sorted == NULL || current->data <= sorted->data)
        {

            current->next = sorted;
            sorted = current;
        }

        else
        {
            node *search = sorted;

            while (search->next != NULL && search->next->data < current->data)
            {
                search = search->next;
            }

            current->next = search->next;
            search->next = current;
        }
}

    return sorted;
}

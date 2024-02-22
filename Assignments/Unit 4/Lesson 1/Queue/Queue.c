#include "Queue.h"

Queue_status create_queue(Queue_t *q, element_type *queue, unsigned int length)
{
    if (queue == NULL)
        return Queue_Null;

    q->base = queue;
    q->head = queue;
    q->tail = queue;
    q->count = 0;
    q->length = length;
    return Queue_no_error;
}
Queue_status Enqueue(Queue_t *q, element_type item)
{
    if (!(q->head) || !(q->tail) || !(q->base))
        return Queue_Null;
    if (is_Full(q) == Queue_full)
        return Queue_full;

    *(q->head) = item;
    q->count++;

    if (q->head == (q->base + (q->length * sizeof(element_type))) && Circular_Queue)
        q->head = q->base;
    else
        q->head++;

    return Queue_no_error;
}
Queue_status Dequeue(Queue_t *q, element_type *item)
{
    if (!(q->head) || !(q->tail) || !(q->base))
        return Queue_Null;
    if (is_Empty(q) == Queue_empty)
        return Queue_empty;

    *item = *(q->tail);
    q->count--;
    if (q->tail == (q->base + (q->length * sizeof(element_type))) && Circular_Queue)
        q->tail = q->base;
    else
        q->tail++;

    return Queue_no_error;
}
Queue_status is_Empty(Queue_t *q)
{
    if (!(q->head) || !(q->tail) || !(q->base))
        return Queue_Null;
    if (q->count == 0)
        return Queue_empty;
    else
        return Queue_not_empty;
}
Queue_status is_Full(Queue_t *q)
{
    if (!(q->head) || !(q->tail) || !(q->base))
        return Queue_Null;
    if (q->count == q->length)
        return Queue_full;
    else
        return Queue_not_full;
}
void printQueue(Queue_t *q)
{
    element_type *temp;
    int i;
    if (is_Empty(q) == Queue_not_empty)
    {
        temp = q->tail;
        printf("\n ========== Queue_print ========== \n");
        for (i = 0; i < q->count; i++)
        {
            printf("\t %x \n ", *temp);
            temp++;
        }
        printf("            ==========\n");
    }
    else
        return;
}
#include "Queue.h"
element_type queue_u[5];
int main()
{
    Queue_t uart_queue;
    element_type i, temp;
    if (create_queue(&uart_queue, queue_u, 5) == Queue_no_error)
        printf("Queue initialized -----Done \n");
    for (i = 0; i < 7; i++)
    {
        printf("Enqueue (%X) \n", i);
        if (Enqueue(&uart_queue, i) == Queue_no_error)
            printf("\t Enqueue ----Done \n");
        else
            printf("\t Enqueue ----Failed \n");
    }
    printQueue(&uart_queue);
    if (Dequeue(&uart_queue, &temp) == Queue_no_error)
        printf("\t Dequeue  (%x)----Done \n", temp);
    if (Dequeue(&uart_queue, &temp) == Queue_no_error)
        printf("\t Dequeue  (%x)----Done \n", temp);
    printQueue(&uart_queue);
    return 0;
}
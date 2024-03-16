#ifndef _Queue_h_
#define _Queue_h_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

#define element_type uint8_t
#define Circular_Queue 0
typedef struct
{
    unsigned int length;
    unsigned int count;
    element_type *head;
    element_type *base;
    element_type *tail;
} Queue_t;

typedef enum
{
    Queue_no_error,
    Queue_Null,
    Queue_full,
    Queue_not_full,
    Queue_empty,
    Queue_not_empty

} Queue_status;

Queue_status create_queue(Queue_t *q, element_type *queue, unsigned int length);
Queue_status Enqueue(Queue_t *q, element_type queue);
Queue_status Dequeue(Queue_t *q, element_type *queue);
Queue_status is_Empty(Queue_t *q);
Queue_status is_Full(Queue_t *q);
void printQueue(Queue_t *q);

#endif
#ifndef _Stack_H_
#define _Stack_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
// we use element_type to change the data type
#define element_type uint8_t

// Stack data type
typedef struct
{
    unsigned int length;
    unsigned int count;
    element_type* base;
    element_type* head;

} Stack_t;

// used to return the 
typedef enum
{
    Stack_no_error,
    Stack_full,
    Stack_not_full,
    stack_not_empty,
    Stack_empty,
    Stack_null

} Stack_status;

Stack_status stack_push(Stack_t *s, element_type item);
Stack_status stack_pop(Stack_t *s, element_type *item);
Stack_status create_stack(Stack_t *s, element_type *stack, unsigned int length);
Stack_status stack_is_empty(Stack_t *s);
Stack_status stack_is_full(Stack_t *s);
void printstack(Stack_t *s);

#endif
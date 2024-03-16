#include "Stack.h"

Stack_status stack_push(Stack_t *s, element_type item)
{
    if (!(s->base) || !(s->head))
        return Stack_null;
    if (stack_is_full(s) == Stack_not_full)
    {
        *(s->head) = item;
        s->head++;
        s->count++;
        return Stack_no_error;
    }
    else
        return Stack_full;
}
Stack_status stack_pop(Stack_t *s, element_type *item)
{
    if (!(s->base) || !(s->head))
        return Stack_null;

    if (stack_is_empty(s) == stack_not_empty)
    {
        s->head--;
        *item = *(s->head);
        s->count--;
        return Stack_no_error;
    }
    else
        return Stack_empty;
}
Stack_status create_stack(Stack_t *s, element_type *stack, unsigned int length)
{
    if (stack == NULL)
        return Stack_null;

    s->base = stack;
    s->head = stack;
    s->length = length;
    s->count = 0;
    return Stack_no_error;
}
Stack_status stack_is_empty(Stack_t *s)
{
    if (s->count == 0)
        return Stack_empty;
    else
        return stack_not_empty;
}
Stack_status stack_is_full(Stack_t *s)
{
    if (s->count == s->length)
        return Stack_full;
    else
        return Stack_not_full;
}
void printstack(Stack_t *s)
{
    element_type *temp;
    int i;
    if (stack_is_empty(s) == Stack_empty)
    {
        printf("The stack is empty");
    }
    else
    {
        temp = (s->head) - 1;
        printf("\n ========== Stack_print ========== \n");
        for (i = 0; i < s->count; i++)
        {
            printf("\t %X \n", *temp);
            temp--;
        }
        printf("            ========== \n");
    }
}

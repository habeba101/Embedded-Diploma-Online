#include "Stack.h"

element_type stack_u[5];

int main()
{
    int i;
    element_type temp = 0;
    Stack_t uart_stack, i2c_stack;
    create_stack(&uart_stack, stack_u, 5);
    element_type *stack_i = (element_type *)malloc(5 * sizeof(element_type));
    create_stack(&i2c_stack, stack_i, 5);

    for (i = 0; i < 5; i++)
    {
        if (stack_push(&uart_stack, i) == Stack_no_error)
        {
            printf("Uart_Stack push : %d \n", i);
        }
    }
    printstack(&uart_stack);
    for (i = 0; i < 5; i++)
    {
        if (stack_pop(&uart_stack, &temp) == Stack_no_error)
        {
            printf("Uart_Stack pop : %d \n", temp);
        }
    }

    return 0;
}

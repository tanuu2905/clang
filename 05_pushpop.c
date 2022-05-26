#include <stdio.h>
#include <stdlib.h>
struct stack
{
                    int size;
                    int top;
                    int *arr;
};
int isempty(struct stack *ptr)
{
                    if (ptr->top == -1)
                    {
                                        return 1;
                    }
                    else
                    {
                                        return 0;
                    }
}
int isfull(struct stack *ptr)
{
                    if (ptr->top == ptr->size - 1)
                    {
                                        return 1;
                    }
                    else
                    {
                                        return 0;
                    }
}

int push(struct stack *ptr, int val)
{
                    if (isfull(ptr))
                    {
                                        printf("stack is over flow cannot accept any element anymore :)) \n");
                    }
                    else
                    {
                                        ptr->top++;
                                        ptr->arr[ptr->top] = val;
                                        return val;
                    }
}
int pop(struct stack *ptr)
{
                    if (isempty(ptr))
                    {
                                        printf("stack is under flow cannot remove  any element now :)) \n");
                    }
                    else
                    {

                                        int store = ptr->arr[ptr->top];
                                        ptr->top--;
                                        return store;
                    }
}
int main()
{
                    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
                    sp->size = 10;
                    sp->top = -1;
                    sp->arr = (int *)malloc(sp->size * sizeof(int));
                    printf("without pushing any element , my stack is full...?? - %d\n", isfull(sp));
                    printf("without pushing any element , my stack is empty ...?? - %d\n", isempty(sp));
                    // push(sp, 1);
                    printf("pushed %d in the stack :))\n", push(sp, 1));
                    printf("after pushing one element , my stack is full...?? - %d\n", isfull(sp));
                    printf("after pushing one element , my stack is empty ...?? - %d\n", isempty(sp));
                    // push(sp, 2);
                    // push(sp, 3);
                    // push(sp, 4);
                    // push(sp, 5);
                    // push(sp, 6);
                    // push(sp, 7);
                    // push(sp, 8);
                    // push(sp, 9);
                    // push(sp, 10);
                    printf("pushed %d in the stack :))\n", push(sp, 2));
                    printf("pushed %d in the stack :))\n", push(sp, 3));
                    printf("pushed %d in the stack :))\n", push(sp, 4));
                    printf("pushed %d in the stack :))\n", push(sp, 5));
                    printf("pushed %d in the stack :))\n", push(sp, 6));
                    printf("pushed %d in the stack :))\n", push(sp, 7));
                    printf("pushed %d in the stack :))\n", push(sp, 8));
                    printf("pushed %d in the stack :))\n", push(sp, 9));
                    printf("pushed %d in the stack :))\n", push(sp, 10));

                    printf("after pushing all element , my stack is full...?? - %d\n", isfull(sp));
                    printf("after pushing all element , my stack is empty ...?? - %d\n", isempty(sp));

                    // one more element beyond size led to  stack overflow
                    // push(sp, 5);

                    // now pop operation :))
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    printf("popped %d from the stack :))\n", pop(sp));
                    // after this all element get removed so we have to face conbdition of underflow :((
                    printf("popped %d from the stack :))\n", pop(sp));

                    return 0;
}
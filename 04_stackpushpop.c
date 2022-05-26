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

int main()
{
                    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
                    sp->size = 10;
                    sp->top = -1;
                    sp->arr = (int *)malloc(sp->size * sizeof(int));
                    printf(" stack is full :%d\n", isfull(sp));
                    printf(" stack is empty :%d\n", isempty(sp));
                    sp->arr[0] = 5;
                    sp->top += 1;
                    //                  printf("after pushing one element in  stack is full :%d\n", isfull(sp));
                    //                printf(" after pushing one elementin stack is empty :%d\n", isempty(sp));

                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    sp->arr[0] = 5;
                    sp->top += 1;
                    //                 sp->arr[0]=5;
                    //                sp->top+=1;
                    printf("after pushing all element in  stack is full :%d\n", isfull(sp));
                    printf(" after pushing all element in stack is empty :%d\n", isempty(sp));

                    return 0;
}
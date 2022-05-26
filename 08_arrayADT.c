#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void setvalue(struct myarray *a, int usize)
{
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &(a->ptr[i]));
    }
}
void showvalue(struct myarray *a, int usize)
{
    for (int i = 1; i <= 5; i++)
    {
        printf(" element %d of array is %d\n", i, (a->ptr[i]));
    }
}

int createarray(struct myarray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

int main()
{
    struct myarray marks;
    createarray(&marks, 10, 5);
    printf("Enter the value\n");
    setvalue(&marks, 5);
    printf("element of array are\n");
    showvalue(&marks, 5);

    return 0;
}



#include <stdio.h>
void display(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          printf("%d\n", arr[i]);
     }
}
int arrydelete( int arr[], int size, int index)
{
     for (int i = index; i <= size-1; i++)
     {
          arr[i] = arr[i + 1];
     }
}

int main()
{
     int arr[] = {100, 50, 25, 10, 5};
     int size = 5;
     int index = 3;
     display(arr, 5);
     
     printf("here is new array\n");
     arrydelete(arr, 5, 3);
     size-=1;
     display(arr, 4);
     return 0;
}

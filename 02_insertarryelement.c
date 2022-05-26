#include <stdio.h>
void trans(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int insert(int arr, int size, int element, int capacity, int index)
{

  if (size >= capacity)
  {
    return -1;
  }
  else
  {
    for (int i = size - 1; i >= index; i--)
    {
      arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int size = sizeof(arr) / sizeof(int);
  int capacity =100; int element = 55; int index = 3;
  printf("here is the element of array\n");
  trans(arr, size);
  printf("after insertion \n");
  insert(arr, size, 55, 100, 3);
  trans(arr, size);

  return 0;
}
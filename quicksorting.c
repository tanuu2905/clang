#include <stdio.h>

void printArray(int a[], int size)
{
                    for (int i = 0; i < size; i++)
                    {
                                        printf("%d  ", a[i]);
                    }
                    printf("\n");
}
int partition(int a[], int low, int high)
{
                    int pivot = a[low];
                    int i = low +1 ;
                    int j = high;
                    int temp;
                    do
                    {
                                        while (a[i] <= pivot)
                                        {
                                                            i++;
                                        }
                                        while (a[j] > pivot)
                                        {
                                                            j--;
                                        }

                                        if (i < j)
                                        {

                                                            temp = a[i];
                                                            a[i] = a[j];
                                                            a[j] = temp;
                                        }
                    } while (i < j);
                    //  swap a[low] and a[j]

                    temp = a[low];
                    a[low] = a[j];
                    a[j] = temp;
                    return j;
}

void quickSort(int a[], int low, int high)
{
                    int partitionindex; //storing pivot index after partition;
                   
                    if (low < high)
                    {
                                        partitionindex = partition(a, low, high);
                                        quickSort(a, low, partitionindex - 1);       // sort left subarray
                                        quickSort(a, partitionindex + 1, high); // sort right subarray
                    }
}


int main()
{
                    int a[] = {3, 5, 2, 13, 12, 3 ,2, 13, 45};
                    int n = 9;
                    printArray(a, n);
                    quickSort(a, 0, n - 1);
                    printf("here is sorted array\n");
                    printArray(a, n);

                    return 0;
}
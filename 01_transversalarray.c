#include<stdio.h>
void trans( int arr[], int  size )
{
      for (int i=0; i<size; i++){
         printf("%d ", arr[i]);
      }             
}


int main(){

     int arr[]={1,3,5,7,9,2,4,6,8,0};
     int size= sizeof(arr) / sizeof(int) ;
     printf("element of array: ");
     trans(arr, size);

     return 0;

}
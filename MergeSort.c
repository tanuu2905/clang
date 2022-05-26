#include<stdio.h>
void printArray(int a[], int size)
{
                    for (int i = 0; i < size; i++)
                    {
                                        printf("%d  ", a[i]);
                    }
                    printf("\n");
}
 void merge(int a[], int low, int mid, int high){
                     int i,j,k,b[100];
                      i= low;
                      j= mid+1; 
                      k=low;
                     
                     while(i<=mid && j<=high){
                           if(a[i] < a[j]) {
                                               b[k]= a[i];
                                               i++;
                                               k++;
                           }    
                           else{
                                               b[k]= a[j];
                                               j++;
                                               k++;

                           }       
                            while(i<=mid){
                                   b[k] = a[i];
                                   i++;
                                   k++;            
                            }
                            while(j<=high){
                                                b[k] = a[j];
                                                j++;
                                                k++;
                            }
                            for(int i = low ; i<=high ; i++){
                                                a[i]= b[i];
                            }
                            
                     }
   

   

   
     
 }


int main(){
                     int a[] = {9,14,4,8,7,5,6};
                    int n = 7;
                    printArray(a, n);
                    // mergeSort( a, 0, 6);
                    printf("here is sorted array\n");
                    printArray(a, n);
 
                    return 0;
}
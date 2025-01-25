#include<stdio.h>
int main (){

int size=5;

int arr [5] = {34,11,44,2,99};

printf("UnSorted array is :");
for (int  i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
for (int  i = 0; i < size-1; i++)
{
    for (int  j= 0; j < size-i-1; j++)
    {
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    
}
printf("Sorted array is :");
for (int  i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}


    return 0;
}
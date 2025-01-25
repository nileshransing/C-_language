#include<stdio.h>

int main(){

int size ;

printf("Enter the size of array");
scanf("%d",&size);

int arr[size];

printf("Enter the Element of array");
for (int i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}




int current;

for (int  i = 1; i < size; i++)
{
    current =arr[i];
    int sorted = i-1;
    while (sorted>=0 && arr[sorted]>current)
    {
        arr[sorted + 1]= arr[sorted];
        sorted --;

    }

    arr [sorted + 1]= current;
    
}


printf("Sorted Array is :\n");
  for(int i =0; i<size; i++){

printf("%d ", arr[i]);
  }
    return 0;


}
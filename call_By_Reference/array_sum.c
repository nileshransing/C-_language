#include<stdio.h>

int arraysum(int arr[],int size){

    int total= 0;
    for(int i=0;i<size;i++){
        total +=arr[i];
    }
return  printf("Sum of Array Element is = %d",total);
}

int main(){
int size=5;
int arr[]={2,5,10,7,0};

// calling function
    arraysum(arr,size);

    return 0;
}
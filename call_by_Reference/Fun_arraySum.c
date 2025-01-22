#include<stdio.h>

int  sumArray(int arr[],int size){
   int total =0;
   for(int i=0;i<size;i++){

   total += arr[i];
      
   }
  return total;
  
}


int main (){
      int size =5;
    int arr[] ={0,1,4,7,9};
    int result = sumArray(arr,size);
  printf("Addition is = %d",result);
    return 0;
}
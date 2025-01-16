#include<stdio.h>
int main(){



  int current ;
  int size=5;
  int arr [5]={23,45,2,67,11};
  printf("Unsorted Array is : ");
  for(int i=0; i<size; i++){

    printf("%d ", arr[i]);
  }
  printf("\n");

  for(int i=1; i<size; i++){
  current = arr[i];
  int sorted = i-1;     //index
  
     while(sorted>=0 && current<arr[sorted]){

      arr [sorted + 1] = arr[sorted];
      sorted --;
      
     }
     arr[sorted + 1] = current;
  }

  printf("Sorted Array is :  ");
   for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
   }
   printf("\n");
    int start= 0;
    int end =size-1;
    int target = 45;
    int flag = 0;
     while(start<=end){
    int mid = (start + end )/2;
     
        if(target == arr[mid]){

          flag =1;
          printf("Element found at index : %d",mid);

          break;
        }
        else if(target> arr[mid]){

          start = mid +1;
          end = end;
        }
        else if(target< arr[mid]){

          start = start;
          end = mid -1;
        }
    }
    
    return 0;
}
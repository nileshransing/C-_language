#include<stdio.h>
int main(){


    int arr[5]={34,49,56,58,99};

    int low=0 , size=5;
    int high=size-1;
    int flag =0;
    int key = 99;
    //  printf("  Enter the element ");
    // scanf("%d",&key);

    while(low<=high){

        int mid = (low + high )/2;
       
         
         if(key==arr[mid]){

            printf("Element found at index %d and element is %d \n ",mid, arr[mid]);
            flag=1;
           break;
         }else if(key>arr[mid]){

            low= mid+1;
            high= high;

         }
         else if (key<arr[mid]){
         low =low;
         high = mid-1;

         }


    }
    if(flag == 0){

        printf("Element Not Found \n");
    }

    return 0;
}

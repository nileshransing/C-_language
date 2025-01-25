#include<stdio.h>
int main(){


//  data_type variable_name [size] = { value };

  int nums[5]={1,2,3,5,7}; //initilization
    //array values are accessed with indexes starting from Zero(0)
    printf("val=%d\n",nums[4]);
    printf("val=%d\n",nums[2]);
    //updating values or Reassiging values using index
    nums[3]=4;
    nums[4]=5;
    printf("val=%d\n",nums[3]);
    printf("val=%d\n",nums[4]);

   
   // for printing all the valuess of array used loop

    //accept and display array elements
    // //dynamic array
    int size=5;
    int arr[size];
    //Accepting values
    for(int i=0;i<size;i++){
       printf("enter val for dynamic_arr[%d]:",i);
       scanf("%d",&arr[i]);
     }

     // displaying values 
     for(int i=0; i<size; i++){
        printf("dynamic array is [%d]= %d \n",i,arr[i]);
     }

        //linear search or sequencial search

    int arr1[5]={5,4,6,9,1};
    printf("enter val to search:");
    int key;
    int flag=0;
    scanf("%d",&key);
    for(int i=0;i<5;i++) {
        if(key==arr1[i]) {
            printf("Element is present at arr[%d]=%d\n",i,arr1[i]);
            flag=1;
        }
    }
     if(flag==0) {
        printf("Element is not present\n");
    }


    return 0;
}
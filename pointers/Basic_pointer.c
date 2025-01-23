#include<stdio.h>


 int add(int a,int b){
    return a+b;
 }
int main(){

// simple pointer
int n = 20;
int *pt =&n;
printf("Address of n = %x \n",pt);
printf("value of n = %d \n",*pt);


//Null pointer
// int *a = NULL;
//  printf("%x \n",a);  
//   printf("%d \n",*a);

// Array Pointer
int arr [6] = {2,4,6,7,5,0};
int *ptr_arr = &arr;
printf("Array address = %x\n",ptr_arr);
printf("Array index 0 = %d\n",*ptr_arr);   
// ptr_arr++;
// for printing array use while loop
 printf("Array is = ");
while(ptr_arr !=NULL && *ptr_arr!=0 ){

    printf("%d ",*ptr_arr);
    ptr_arr++;
}


    // function Pointer
    printf("\n");
    int (*ptr_fun) (int,int) = &add;
int result =    ptr_fun(45,45);
 printf("result is= %d",result);
    return 0;
}
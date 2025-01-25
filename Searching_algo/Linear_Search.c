#include<stdio.h>
int main(){

    int arr[5] = {2,54,45,77,10};
    int target = 454;
    int flag = 0;

    for(int i =0; i<5; i++ ){

        if(target == arr[i]){
           printf(" Element found At index  arr[%d] = %d", arr[i],i);
        }
    }
    if(flag == 0){
        printf(" Element Not  found ");
    }

    return 0;
}
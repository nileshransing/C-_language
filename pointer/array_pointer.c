#include<stdio.h>
int main(){

int arr[5]={45,2,57,78,1};
int *parr = arr;
printf("%d\n",*parr);
//parr++;
//printf("%d\n",*parr);
// for printing array pointer used loop
printf("Array is = ");

for(int i=0;i<5;i++){
    printf("%d ",*parr);
    *parr++;
}
// while( *parr !=0){

//     printf("%d\n",*parr);
//     parr++;
// }
    return 0;
}
#include<stdio.h>
#include<string.h>

struct studentdata{
     int id;
    char name[20];
    double marks;
}typedef studentdata;


int main(){
   studentdata arr[2];
    
   for(int i=0;i<2;i++){
    printf("Enter Student Id \n");
    scanf("%d",arr[i].id);

   }
    
    for(int i=0;i<2;i++){
        printf("Id=%d\n",arr[i].id);
    }
    return 0;
}
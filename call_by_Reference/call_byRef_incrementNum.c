#include<stdio.h>

// call by Reference
void incrementNum(int *a){

    *a+=5;
    printf("a = %d \n",*a);
}

int main(){
int a = 45;
printf("Before function calling a = %d\n",a);

incrementNum(&a);
printf("After function calling a = %d",a);
    return 0;
}
#include<stdio.h>
int main(){

//simple pointer

int a=5;
int *ptr =&a;
printf("%d\n",*ptr); // value of a
printf("%x\n",ptr);  // Address of a

// Null pointer
int *n = NULL;
printf("%x\n",n);  //address of pointer
printf("%d\n",*n); // Nothing is store

    return 0;
}
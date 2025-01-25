#include<stdio.h>
int areaofRhombus(int height,int base){

    return height*base;
}
int main(){

//function Pointer
int (*fptr) (int ,int )= &areaofRhombus;

int result=fptr(5,45);
printf("Area of Rhombus is = %d\n",result);

    return 0;
}
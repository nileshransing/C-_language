#include<stdio.h>

#define PI 3.14
#include<string.h>

#ifdef PI
//#define msg - "PI is defined"
    #define PI 4.1
#endif

#ifndef MAX 
   #define MAX 200
#endif

#define MIN 21
#if MIN >20
#define msg "min is grater than 20"
#elif MIN == 20
#define msg "min is equal to 20"
#else 
#define msg "min is less than 20"
#endif
int main(){

printf("Area of Circle = %.4f\n",(PI*5*5));

char str [10]="Nilesh";
printf("Length of String is = %d\n",strlen(str));

printf("MAX is = %d \n",MAX);

printf("min = %s\n",msg);

printf("Date is = %s\n",__DATE__);
printf("Time is %s\n",__TIME__);

    return 0;
}
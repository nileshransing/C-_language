#include<stdio.h>

 #define PI 3.145656

#include<string.h>


#ifdef PI
    //#define msg "PI is defined"
    #define PI 4.1
#endif

#ifndef MAX
    #define MAX 100
#endif


#define min 21
#if min>20
#define msg "min is grater then 20"
#elif min==20
#define msg "min is equal to 20"
#else 
#define msg "min is less then 20"
#endif

//#line 

int main(){

printf("%.6f \n",PI);

char str[10] = "Nilesh";
printf("Str length = %d \n",strlen(str));

printf("MSG = %s\n",msg);
printf("MAX = %d \n",MAX);

printf("Today Time is = %s\n",__TIME__);
printf("Today date is = %s\n",__DATE__);
    return 0;
}
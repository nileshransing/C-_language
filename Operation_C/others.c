#include <stdio.h>
int main(){


   // size OF
   int a=45;
   printf("Size of a= %d \n", sizeof(a));

   // coma ,
   int n=5, m=6;
   printf("n=%d  m=%d \n",n,m);

   // ?: ternary operator

   (m==n)? printf("yes \n") : printf("No\n");

   // type cating
   float v=45.4;
   printf("v = %d \n", (float) v);

   // & take address of data
   n=55;
   printf("n = %x \n", &n);

   // * pointer
   int number =445;
   int *ptr = &number ;
   printf("*ptr= %d\n", *ptr);
   printf(" ptr = %d \n", ptr);
   printf(" ptr = %x \n ", ptr);

    return 0;
}

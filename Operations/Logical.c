<<<<<<< HEAD
/**
 * && And
 * || OR
 * !  Not Reverse
 */

#include <stdio.h>
int main(){

    int a=5;
    int b=8;
    int c=34;

     // && and 
    printf("a==b &&  a<b  = %d \n ",a==b &&  a<b );   

     // || OR 
    printf("a==b ||  a<b  = %d \n ",a==b ||  a<b );   

     // ! Not
    printf("!(a==b &&  a<b ) = %d \n ",!( a>b || b>c) );   


    return 0;
}
=======
  
  /*
  Logical Operators  Not ! ,  And || ,   OR &&

   */

   #include <stdio.h>
   int main(){


   int a =56;
   int b= 45;
   int c=45;

   // logical and &&
    printf(" a>b && b>c: %d \n" , a>b && b>c);


   // Logical  OR ||
   printf(" b=c || a<c: %d \n", b=c || a<c);

 // logical Not !
  printf("  without Not  b=c || a>c : %d \n", (b=c || a>c));
  printf("  with Not !( b=c || a>c ): %d \n", !(b=c || a>c));

    return 0;

   }
>>>>>>> 46fb3bb (Intro_c)

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
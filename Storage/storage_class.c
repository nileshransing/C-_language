#include<stdio.h>
 // global variable outside of function block
extern int extn = 40;

 void fun_block(){

    // Local variable inside of functon block
    auto int a =10;
    printf("auto = %d \n",a);
    a++;    // --Not increment in value

    register int b=20;
    printf("register = %d\n",b);
    b++;   // -- Not increment in value

    static int stat = 30;
    printf("static = %d\n",stat);
    stat++;   // -- increment in value

     printf("extern = %d\n",extn);
    extn++;   // -- increment in value
 }

int main(){
    // auto class
    printf("Main Block\n");
   auto int a= 45;
   printf("auto = %d\n",a);

   // register class
   register int b = 18;
   printf("register = %d\n",b);

     // static class   
   static  int stat = 1;
   printf("static = %d\n",stat);
    // stat++;

    printf("extern = %d\n",extn);  
  // extn++;   // -- increment in value

    printf("function Block\n");
    fun_block();
     printf("function Block\n");
    fun_block();
    return 0;
}
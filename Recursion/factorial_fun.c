#include<stdio.h>

  int fact(int n){
  if( n==1){
    return 1;
  }
   return n * fact(n-1);
  }

int main(){
   // factorial 
 int total = 1;
 int n= 5;
 for(int i=n; i>=1;i--){
    total =total * i;
 }
 printf("Factorial is = %d\n",total);
 
// Using Recursion function find factorial
   int result =  fact(5);
   printf("Using Function Factorial of 5 is = %d\n",result);
   
     return 0;

}
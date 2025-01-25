#include<stdio.h>
 
 // syntax
 // data-type fun-name (parameters){
 //         fuction block
 // }
     

     void greet(){

        printf("Good mornig KT\n");
     }
     void sum(int a, int b){
       int ans = a+b;
       printf("sum is = %d\n",ans);
     }
int main(){
    greet();
    sum(5,5);
    return  0;
}
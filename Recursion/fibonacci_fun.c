#include<stdio.h>
  // fibonacci series 0 1 1 2 3 5 8 13 21 34 55 ...
  // using recursion print fibonacci series !!
int fibo(int a, int b,int n){
     if(n==0 ){   
        return 0;
      }
     int c =a+b;
    printf("%d ",c);
    
    return  fibo(b,c,n-1);
}

int main(){

     int a=0,b=1;
     int n=5;
     printf("%d ",a);
     printf("%d ",b);
    fibo(a,b,n);
 

    return 0;
}
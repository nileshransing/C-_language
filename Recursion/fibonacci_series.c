#include<stdio.h>

int fibo(int a,int b,int n){
if(n==0){
    return 0;
}
  int c=a+b;
  printf("%d ",c);
    return fibo(b,c,n-1);
}
int main(){
int a=0, b=1;
int n=7;
printf("%d ",a);
printf("%d ",b);
fibo(a,b,n);


    return 0;
}
#include<stdio.h>

int mul(int a,int b){

    return a*b;
}

float perimeterofCircle(int r){
     return 2*3.14*r;
}

int main(){
 
 int ans =  mul(5,5);
 printf("Multiplication is = %d\n",ans);

 float Ans = perimeterofCircle(5);
 printf("Area is = %f\n",Ans);
    return 0;
}
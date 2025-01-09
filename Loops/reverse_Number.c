#include<stdio.h>

int main(){


int num=123;
int total;
while(num%10!=0){

   
    total= num % 10;
    printf("%d", total);
     int temp = num;
    temp= temp/10;
    num=temp;

}
    return 0;
}
#include<stdio.h>
int main(){
 int a;
 printf("Enter the Number : \n");
 int num=1;
 scanf("%d",&a);
  while(num<11){
    printf("%d X %d = %d \n",num,a, a*num);

    num++;

  }


    return 0;
}
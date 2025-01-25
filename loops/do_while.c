#include<stdio.h>
int main(){


int m=1;
printf("Enter the Number : ");
int n;
scanf("%d",&n);
    do{
        printf("%d \n",m*n);
        m++;
    }
        while(m<=10);

    return 0;

}
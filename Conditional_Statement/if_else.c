#include <stdio.h>
int main(){


 int num;

 printf("Enter the Number to check whether is Even or Odd : ");
  // User Input
 scanf("%d", &num);
 
 if(num % 2 == 0){
    printf("Number is even.. ");
 } 
 else{
    printf("Number is odd.. ");
 }


    return 0;
}
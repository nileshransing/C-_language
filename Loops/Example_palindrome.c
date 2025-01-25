#include<stdio.h>
int main(){

// palindrome
int reverse = 0 ,remainder;
int num = 121;

int original =num;
while(num!=0){

  remainder= num%10;
  reverse = reverse * 10 + remainder;
  num /=10;

}
if(original == reverse ){
        printf("this is palindrome");
    }else{
        printf("this is not palindrome");
    }

      
    return 0;
}
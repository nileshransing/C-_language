#include<stdio.h>
    // syntax
    //  return_type function_name(parameters){
    //       function block code 
    // }
   void sum(){
     int a=4, b=5;
     int sum = a+b;
     printf("Sum is = %d \n",sum);

}
   // parameter passing 
void mul(int c, int d){
     int multiplication = c*d;
    printf("multiplication is = %d \n",multiplication);
}  

    void add(){
        printf("Enter the first Number\n");
        int a;
        scanf("%d",&a);
        printf("Enter the second Number\n");
        int b;
        scanf("%d",&b);
        printf("Addition is = %d",a+b);
    }
    

int main(){
   int a =45;
   int b=46;
      
      sum();
      mul(5,5);
      add();

    return 0;
}

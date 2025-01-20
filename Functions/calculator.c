#include<stdio.h>

void calculator(int a, int b){
    printf("Enter your Operaton\n");
   char operation;
   scanf("%c",&operation);
    switch(operation){

        case '+':{
        printf("addition is = %d\n", a+b);
        break;
        }
        case '-':{
        printf("sub is = %d \n",a-b);
        break ;
        }
         case '*':{
        printf("Multiplicaton is = %d \n",a*b);
        break ;
        }
        case '/':{
        printf("division is = %d \n",a/b);
        break ;
        }

        case '%':{
        printf("Remainder is = %d \n",a%b);
        break ;
        }
        default :{
            printf("Invalid character");
        }

    }
}
 
int main(){
       calculator(55,5);
    return 0;
}
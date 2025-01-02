


/**
 * sizeof
 * sizeof (operand)
 * , 
 * (operand1 , operand2)
 * ?:
 * (condition ? operand1 : operand2)
 * . dot -> used to access struct members
 * cast
 * (new_type) operand; 
 * & returns the address of a var
 * * pointer var
 */
#include <stdio.h>
int main (){

    // sizeof

    int a=14;
    int b=15;
    printf("a= %d\n",sizeof(a));  // int memory size 4 byte 

    // ,coma 
    int m=12, n=345;

    // ?: ternary operator

    (m<=n) ? printf("yes") : printf("No");

    // Cast data type
    int x=45;
    printf(" x= %f \n", (float)x);

    // & return address of variable
    printf("a= %d \n", &a);

    // * pointer 

    int z=45;
    int *ptr = &z;

    printf("*ptr = %d \n", *ptr);

    printf("ptr = %d \n",ptr);

    printf("ptr = %x \n",ptr);

    return 0;

}
#include<stdio.h>
int main(){

// int a=2;

// do{
//       printf("%d \n",a);
    
//     a++;
// }while(a<10);


   // Example
int choice;
do {
    
    printf("Option 1 : Buy the product\n");
    printf("Option 2 : Remove the product\n");
    printf("Option 3 : check the product\n");
    printf("Enter your choice: ");        
    scanf("%d", &choice);

    switch(choice){

        case 1 : {
            printf(" product Bought \n");
        }
        break;

        case 2 :{
            printf(" product Remove \n");

        }
        break;
        case 3 :{
            printf(" product ckeck\n");
        }
        break;
        default : {
            printf(" exit");
        }
    }
} while (choice < 3);

    return 0;
}
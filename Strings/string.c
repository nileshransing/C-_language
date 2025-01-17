#include<stdio.h>
#include<string.h>

int main(){

// syntax
// data_type str_name [size] = {"string"};

// char str1 [5]={"Kt"};
// printf("%s \n",str1);    // for print string used %s format specifier

// printf("Enter the String ");  // User Input
// char str2 [18];
// scanf("%s ",&str2);
// printf("String2 is = %s \n ", str2);


char name [10];
 printf("Enter Your Name \n");

for(int i=0; i<10; i++){  // taking user Input

   scanf("%c",&name[i]);
   
}
   
for(int i=0; i<10; i++){ // for printing loop

     printf("%c", name[i]);
}

// printf("Enter a Charater :");  // take a character
// char a ;
// scanf("%c",&a);
// printf("%c",a);

 return 0;
}
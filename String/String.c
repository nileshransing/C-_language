#include<stdio.h>
int main(){

//    char str[100] ="Nilesh";
//    printf("String is= %s\n ",str);

   char str1[10] ="Ransing";
   for(int i=0;i<100;i++){
    printf("%c\n",str1[i]);
   }
  printf("Enter the name\n");
   char name[10] ;
   for(int i=0;i<10;i++){
      scanf("%c",&name[i]);
      printf("%c",name[i]);

   }
    return 0;
}
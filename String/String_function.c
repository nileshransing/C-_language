#include<stdio.h>
#include<string.h>
int main(){

  char str1[10]="Nilesh ";
  char str2[10]="Ransing";
 //  concating string
  printf("Concating String is =%s \n",strcat(str1,str2));

 // length of string

 printf("Length of str1 = %d\n",strlen(str1));

 //copy the string

 char str3[10]="Nil";
  char str4[10];
  printf("Copy string is =%s\n",strcpy(str4,str3));

    return 0;
}
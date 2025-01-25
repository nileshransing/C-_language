#include<stdio.h>
#include<string.h>
int main(){
    
   // strcmp()  function using campare two String
//    char str1 [100] ="Nilesh";
//    char str2 [100] = "Nilesh";
//    printf("compare two String using fuction = %d \n",strcmp(str1,str2));

   
   // without function compare two string
    char str3 [100] ="Nilesh";
   char str4 [100] ="Nileshh";
   int num=-1 ;
   for(int i=0; i<100; i++){
    if(str3[i]==str4[i]){
          num = 0;
         
    }else{
          num =-1;
        
    }
   } 
    if(num==0){
          printf("Strings are Equal\n");
    }else{
           printf("Strings are Not Equal\n");
    }
    return 0;
}
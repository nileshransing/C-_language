#include<stdio.h>
int main(){

   // Upper case Using strupr() Function
    char str1[10] = "kt";
    strupr(str1);
    printf("%s \n",str1);

   // without function 
   char str2[10] = "nilesh";
   for(int i=0;i<100;i++){
    if(str2[i]!=0){
      str2[i]=str2[i]-32;
    }
   }
   printf("Without function = %s",str2);
    
    return 0;
}
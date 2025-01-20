#include<stdio.h>
#include<string.h>
int main(){
  // lower Case  Using strlwr() Function
//  char str1[10] = "NILESH";
//  strlwr(str1);
//  printf("%s \n",str1); 

 // without function 
   char str2[10] = "NILESH";
   for(int i=0;i<100;i++){
    if(str2[i]!=0){
      str2[i]=str2[i]+32;
    }
   }
   printf("Without function = %s",str2);
    
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){

//  get the length of string using * strlen * function
  printf("length of String = %d \n", strlen("Nilesh Ransing") );

// copy 1 string in 2 string using * strcpy * function
  char string1 [100] = {"Nilesh Ransing"};
  char string2 [100];
 strcpy(string2, string1);
  printf("%s \n" ,string2);

   // without function
  // get length
     char str2 [100] = {"In November 2013, during Sachin Tendulkar's farewell series,"} ;
     int length = 0;
     for(int i=0 ; i<100; i++){
        if(str2[i]!=0){
            length = length +1;
        }
     }
     printf("length is = %d \n",length);

// copy the string without function
   int size =1000  ;
   char str3 [1000]= { "In November 2013, during Sachin  his Test debut at Having been out of the Test team since 2017–18, Sharma went on the 2018–19 tour of Australia after he had earned a recall earlier. Chief selector M. S. K. Prasad said the reason for his recall was that his natural game suited the bouncy Australian pitches.[34] Sharma played in the first Test in Adelaide, scoring 37 and 1 in an Indian victory.[35][36] During the first Test, he sustained a minor injury which saw him miss the second Test in Perth.[37] He recovered for the Boxing Day third Test at Melbourne and scored 63 (not out) to help India total 443/7 and win both the Test and the series.[38] After the third Test, Sharma had to return to India for the birth of his daughter.[39]"};
   char str4 [1000];
   for(int i=0; i<size; i++){
       str4[i] =str3[i];
       printf("%c",str4[i]);
   }
 
    return 0;
}
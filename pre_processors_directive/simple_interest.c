#include<stdio.h>

#define PrincipleAmount 5000
#define AnualRate 5
#define TimePeriod 2 

int main(){

 float SI =(PrincipleAmount * AnualRate * TimePeriod)/100 ;
 printf("Simple Interest is = %f\n",SI);
 
 float CI = (PrincipleAmount*(1 + (AnualRate/2)))*(2*TimePeriod);
  printf("Compuond Interest is = %f\n",CI);    // wrong

    return 0;
}
/**
 * ==
 * !=
 * > greater than
 * < less than
 * <= less than
 * >= greater than
 */

#include<stdio.h>
int main(){
  
  int m=23;
  int n=45;
  int v=45;

// equal to ==
printf("Equal= %d \n",v==n);

// Not equal to !=
printf("Not equal to = %d \n",v!=m);

// greater than
printf(" greater than = %d \n",n>m);

// less than <
printf("less than = %d \n",n<m);

// greater than equal to >=
printf("Greater than equal to = %d \n",v>=m);

// Less than equal to <=
printf("Less than equal to = %d \n",v<=m);

    return 0;
}
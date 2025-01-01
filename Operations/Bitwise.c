 /* & And
 *  | OR
 *  ^ Xor
 *  ~ Complement
 *  << leftshift
 *  >> rightshift */

#include <stdio.h>
int main(){
//  1 0001
//  2 0010
//  3 0011
//  4 0100
//  5 0101
//  6 0110
//  7 0111
//  8 1000
//  9 1001
// 10 1010

int a=9;  // 1001
int b=10; // 1010

  // And &
    printf("a&b = %d \n",a&b);
    return 0;
}
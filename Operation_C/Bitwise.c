       

       #include <stdio.h>
       int main(){


// Bitwise &

   int a=5;  // 0101
   int b=6;  // 0110
   printf("a & b = %d \n",a&b);


// Bitwise |

    printf(" a|b = %d \n",a|b);

// XOR  ^     //    a b ^
            //      0 1 1
            //      1 0 1
             //     1 1 0
             //     0 0 0
        printf(" a^b = %d \n", a^b);
      
        // ~ compliment
        printf(" ~a = %d \n ",~a);

        // left shift <<
        printf(" a<<1 = %d \n", a<<1);


        // Right Shift >>
        printf(" a>>1 = %d \n ", a>>1);


          return 0;


       }
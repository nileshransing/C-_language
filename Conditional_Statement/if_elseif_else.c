#include <stdio.h>
int main (){


int percentage;
printf(" Enter your Persentage : ");

scanf("%d", &percentage);

if( percentage >= 80 && percentage<=100 ){

    printf(" percentage is = %d \n grade = O",percentage);
}
else if( percentage >=70 && percentage<=79){

       printf(" percentage is = %d \n grade = A+",percentage);
}
else if( percentage >=60 && percentage<=69  )
{
     printf(" percentage is = %d \n grade = A",percentage);
}

else if( percentage >=55 && percentage<=59  )
{
     printf(" percentage is = %d \n grade = B+",percentage);
}

else if( percentage >=45 && percentage<=49  )
{
     printf(" percentage is = %d \n grade = B",percentage);
     
}

else if( percentage >=40 && percentage<=44  )
{
     printf(" percentage is = %d \n grade = C",percentage);
}

else {
    printf("  marks = %d\nYou are Fail.",percentage);
}


    return 0;
}
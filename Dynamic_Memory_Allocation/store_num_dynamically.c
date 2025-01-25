#include<stdio.h>
int main(){

// melloc- syntax
// data-type *ptr = (*data_type) malloc(sizeof(data-type))


//  int *ptr= (int*) malloc(sizeof(int));
//     printf("ptr=%x\n",ptr);
//     *ptr=10;
//     printf("ptr=%d\n",*ptr);
//     printf("ptr=%x\n",ptr);
    

    
    // syntax
   //data-type *pointer=(type-cast*)calloc(numberofblocks,sizeof(data-type))
     int *pt5 =(int*) calloc(5,sizeof(int));
   // memory allocation using calloc print 5 number user input
     int size =5;
     printf("*pt5=%x\n",pt5);
     printf("Enter the 5 Numbers\n");
  
     for(int i=0;i<size;i++){
        scanf("%d",&pt5[i]);
     }

     for(int i=0;i<size;i++){
       printf("*pt5=%d\n",pt5[i]);
        printf("*pt5 Address=%x\n",&pt5[i]);
     }
    
    return 0;
}
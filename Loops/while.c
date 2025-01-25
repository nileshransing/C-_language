     #include<stdio.h>
     int main(){
  

    int a;
    int num=1; // initilasation

  printf("Enter the Number: ");
  scanf(" %d ",&a);

  while(num<11) // condition
   {
    printf("%d  \n",num*a);
    
      num++;  // increament
    }
    return 0;

     }
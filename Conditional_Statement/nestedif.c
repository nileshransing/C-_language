#include<stdio.h>
int main(){
      printf("Your Weekdays : \n ");
      printf("Enter 1 for Monday \n ");
       printf("Enter 2 for Tuesday \n");
        printf("Enter 3 for Wednesday \n");
         printf("Enter 4 for Thursday \n");
          printf("Enter 5 for Friday\n");
           printf("Enter 6 for Saturday \n");
          printf("Enter 7 for  Sunday \n");
          printf(" Enter Your Day : ");

          int number;
        
          scanf("%d",&number );
          switch(number){

            case 1: {
                 printf("Today is Monday \n");
                 
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello\n");
                }
             }


            }
            break;

             case 2: {
                printf("Today is Tuesday\n");

              
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }

                

            }
            break;
             case 3: {
                printf("Today is Wednesday\n");


                  
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }


            }
            break;
             case 4: {
                printf("Today is Thursday \n");
                  
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }


            }
            break;
             case 5: {
                printf("Today is Friday \n");

                  
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }


            }
            break;
             case 6: {
                printf("Today is Saturday\n");

                  
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }


            }
            break;
             case 7: {
                printf("Today is Sunday \n");

                  
                printf(" Enter 5 for Good Morning! \n");
                printf(" Enter 12  for Good AfterNoon!\n");
                printf(" Enter 6 for Good Evening!\n");
                printf("Enter Your Time \n ");
               int time;
              char temp;
              scanf("%c ",&temp);
              scanf(" %d", &time);
              switch(time){
                case 5: {
                    printf("Good Morning \n");
                }
                break;
                 case 12: {
                    printf("Good EferNoon \n");
                }
                break;
                 case 6: {
                    printf("Good Evening \n"); 
                }
                break;
                default : {
                    printf("Ivalid Number, Hello");
                }
             }


            }
            break;

            default : {
                printf("Invalid Number : Hello");
            }
          }
          


    return 0;
}
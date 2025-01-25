#include<stdio.h>
#include<string.h>

struct studentinfo{

    int id;
    char name[20];
    double marks;
} typedef studentinfo;

int main(){
studentinfo s1;
printf("Enter your Id \n");
scanf("%d",&s1.id);
printf("ID =%d\n",s1.id);
 
printf("Enter your name \n");
scanf("%s",&s1.name);
printf("Name =%s\n",s1.name);

printf("Enter your Marks\n ");
scanf("%lf",&s1.marks);
printf("Marks =%lf\n",s1.marks);

 


s1.marks=456;

//    printf("Id= %d\n",s1.id);
//    printf("Name= %s\n",s1.name);
//    printf("Marks= %lf\n",s1.marks);
    return 0;
}
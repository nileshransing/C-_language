#include<stdio.h>
#include<string.h>
 
 //  union: A union in C is a special data structure 
 //        that allows storing different data types in the same memory location. 
union emp{

    int id;
    char name[20];
    double salary;

}typedef emp;

int main(){
emp arr[2];

// for taking User Input and print them
for(int i=0;i<2;i++){
  printf("Enter Employee the Id: ");
  scanf("%d",&arr[i].id);
   printf("Id=%d\n",arr[i].id);

  printf("Enter Employee Name: ");
  scanf("%s",&arr[i].name);
   printf("Name=%s\n",arr[i].name);

  printf("Enter Employee salary: ");
  scanf("%lf",&arr[i].salary);
  printf("Salary=%lf\n",arr[i].salary);

}   
    return 0;
}

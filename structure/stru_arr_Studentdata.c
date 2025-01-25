#include<stdio.h>
#include<string.h>

struct StudentData{

    int id ;
    char name[20];
    double marks;

}typedef StudentData;

int main(){
    StudentData arr[2];
    printf("%x\n",arr);
  
  // Taking array Input from User
    for(int i=0;i<2;i++){
    printf("Enter Student Id: ");
    scanf("%d",&arr[i].id);

    printf("Enter Student Name: ");
    scanf("%s",&arr[i].name);

    printf("Enter Student Marks: ");
    scanf("%lf",&arr[i].marks);
    }
     // for printing Array
     for(int i=0;i<2;i++){
     printf("Id=%d\n",arr[i].id);
     printf("Name=%s\n",arr[i].name);
     printf("Marks=%lf\n",arr[i].marks);
    
    }

  


    return 0;
}
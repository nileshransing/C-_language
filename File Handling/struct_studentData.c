#include<stdio.h>
#include<string.h>
struct studentinfo{

    int  id;
    char name[20];
    float marks;
}typedef studentinfo;

int main(){

FILE *fptr = fopen("studentDat.txt","w");

if(fptr != NULL){
    printf("File Exists\n");
}else{
    printf("File Not Exists\n");
}

studentinfo arr[5];
for(int i=0;i<5;i++){

printf("Enter student the Id: ");
scanf("%d",&arr[i].id);
   
printf("Enter Student Name: ");
scanf("%s",&arr[i].name);
 
printf("Enter student Marks: ");
scanf("%f",&arr[i].marks);
}
for(int i=0; i<5;i++){

        fprintf(fptr, "Id = %d\n", arr[i].id);
        fprintf(fptr, "Name = %s\n", arr[i].name);
        fprintf(fptr, "Marks = %.2f\n\n", arr[i].marks);
//fprintf(fptr,"ID=%d Name=%s Marks=%.2f\n",arr[i].id,arr[i].name, arr[i].marks);
    // printf("Id= %d\n",arr[i].id);
    // printf("Name=%s\n",arr[i].name);
    // printf("marks=%f\n",arr[i].marks);
}
//fputs(arr,fptr);
fclose(fptr);
    return 0;
}

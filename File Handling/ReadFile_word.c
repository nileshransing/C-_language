#include<stdio.h>
int main(){

FILE *fptr;
// read File
  fptr=fopen("emp.txt","r");


// int space;
// int line=0;
// char temp;
// int word=0;
// // fgetc - read file character by character
// while((temp=fgetc(fptr))!=EOF){  
//     int tmpInt=(int)temp;
//    if(tmpInt==32 || tmpInt==10 || tmpInt==59){
//       word++;
//    }
//     if(tmpInt==10 || tmpInt==59){
//         line++;
//     }
//     if(tmpInt==32){
//       space++;
//     }
// }
//     printf("No of Words =%d\n",word);
//     printf("Space =%d\n",space);
//     printf("No of Lines =%d\n",line);
    

    //    // fgets - read file line by line 
    // char str[100];
    // while(fgets(str,100,fptr) !=NULL){
    //     printf("Line = %s\n",str);
    // }
        
        // fscanf - format based read
    int eid;
    char name[100], address[100];
   while( fscanf(fptr,"%d %s %s",&eid,&name,&address)==3){
     printf("Id=%d\t",eid);
    printf("Name =%s\t",name);
    printf("Address= %s\t",address);
    printf("\n");
   }
    return 0;
}

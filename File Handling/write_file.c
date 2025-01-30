#include<stdio.h>
#include<string.h>
 
 int main(){

FILE *fptr = fopen("File.txt","w");

// To check File is Exists or not 
if(fptr != NULL){
    printf("File Exists\n");
}else{
    printf("File Not Exists\n");
}

 // write in File
 int count=0;
char str1[200]="Nilesh Ransing The Code. He is the best player in kho-kho, but he hasnt given himself many chances in his career.\n";
for(int i=0; i<200; i++){
    if(str1[i] !=0){
       fputc(str1[i],fptr);
    }
    count++;
}
if(count==200){
    printf("Write Successful\n");
}
else{
    printf("Write Fail\n");
}
fclose(fptr);

//fputs - fuction to write string in file 
    FILE *fptr2 =fopen("File.txt","a");
    char str2[20]="Nilesh Ransing\n";
    fputs(str2,fptr2);
   // fclose(fptr2);

    // fprintf 
    int id=45;
    char name[50]="Nilesh";
    char branch[50]="Electronic & Telecommunication";
    fprintf(fptr2,"%d %s %s",id, name,branch);

    fclose(fptr2);
    return 0;
 }

#include<stdio.h>
int main(){

FILE *fptr;
//Mode- 
// Read - r
// Write- w
// Append - a
// Syntax: fopen("file-name.txt","Mode");
  fptr=fopen("emp.txt","r");
if(fptr!=NULL){
    printf("File Exists\n");
}else{
    printf("File Does Not Exists\n");
}


char temp;
int counter =0;
while((temp=fgetc(fptr))!=EOF){
     if(space==32){
        printf("Space occures\n");
      space++;
    }

    printf("Temp=%c ",temp);
    printf("ASCII value=%d\n",temp);
    counter++;

}
printf("No of Character in File=%d \n",counter);
printf("Space =%d\n",space);

    return 0;
}

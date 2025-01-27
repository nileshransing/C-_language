#include<stdio.h>
#include<string.h>

struct employee{

  int eid;
    char ename[20];
    double salary;

}typedef employee;

union Employee{
    int eid;
    char ename[20];
    double salary;
}typedef Employee;

int main(){

printf("Size of structure =%d\n",sizeof(employee));
printf("Size of structure =%d\n",sizeof(Employee));

Employee E1,E2;
E1.eid= 45;
printf("Employee Id=%d\n",E1.eid);
E2.eid=18;
printf("Employee Id=%d\n",E2.eid);

char name[20]="Nilesh";
strcpy(E1.ename,name);
printf("Employee Name =%s\n",E1.ename);

char name2[20]="Amar";
strcpy(E2.ename,name2);
printf("Employee Name =%s\n",E2.ename);

E1.salary = 3345465;
printf("Employee Salary = %lf\n",E1.salary);
E2.salary = 358678;
printf("Employee Salary = %lf\n",E2.salary);
    return 0;
}

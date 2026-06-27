#include<stdio.h>

struct Employee  
{
    int id;
    char name[50];
    float salary;

};

int main()
{
   struct Employee e;
   printf("enter Emoloyee ID:");
   scanf("%d",&e.id);

   printf("enter Employee Name:");
   scanf("%s", e.name);

   printf("enter Employee Salary");
   scanf("%f", &e.salary);



   printf("\n=====Employee Record=====\n");
   printf("employee ID     :%d\n", e.id);
   printf("Empolyee Name    :%s\n", e.name);
   printf("employee Salary  : %2f\n", e.salary);



   return 0;




}

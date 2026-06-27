#include<stdio.h>

struct Salary
{
    char name[50];
    float basic, bonus, total;
};

int main(){

    struct Salary s;

    printf("Enter Employee Name: ");
    scanf("%s", s.name);





    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);



    printf("Enter Bonus: ");
    scanf("%f", &s.bonus);


    s.total = s.basic + s.bonus;


    printf("\n===== Salary Record =====\n");
    printf("Employee Name : %s\n", s.name);
    printf("Basic Salary  : %.2f\n", s.basic);
    
    printf("Bonus         : %.2f\n", s.bonus);

    printf("Total Salary  : %.2f\n", s.total);


    return 0;
}
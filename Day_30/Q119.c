#include<stdio.h>

struct Employee
{
    int id; 
    char name[50];
    float salary;
};
int main(){

    struct Employee e[100];
    int n, i;

    printf("enter number of empolyess:");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n",i+1);

        printf("empolyee ID:");
        scanf("%d", &e[i].salary);

        printf("Employee Name:");
        scanf("%s", e[i].name);

        printf("salary:");
        scanf("%f", &e[i].salary);
    }

    printf("\n-----Employee Records-----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i+1);
        printf("Employee ID   : %d\n", e[i].id);
        printf("Empolyee Name : %s\n",e[i].name);
        printf("salary      :%.2f\n", e[i]. salary);

    }
    return 0;


}
#include<stdio.h>
#include<string.h>

struct Student
{
    int roll; 
    char name[50];
    float marks;
};
void addStudent (struct Student s[], int n)
{
    int i;
    for(i = 0; i< n; i++)
    {
        printf("\nEnter details of students %d\n", i+1);

        printf("roll no:");
        scanf("%d", &s[i].roll);

        printf("Name:");
        scanf("%s", s[i].name);

        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
}

void displayStudents(struct Student s[], int n)
{
    int i;

    printf("\n-----Student Records -----\n");

    for(i= 0; i < n; i++)
    {
        printf("\nstudent %d\n",i+1);
        printf("Roll No  : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}
int main(){

    struct Student s[100];
    int n;

    printf("Enter number of students:");
    scanf("%d", &n);


    addStudent (s,n);
    displayStudents(s,n);
    return 0;
}
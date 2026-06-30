#include<stdio.h>

struct Student
{
  int roll;
  char name[50];
  float marks;
};
int main(){

    struct Student s[100];
    int n, i;

    printf("enter number of students:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\ndetails of students %d\n", i+1);

        printf("Roll No:");
        scanf("%d", &s[i]. roll);
        
        printf("Name:");
        scanf("%s", &s[i]. name);

        printf("Marks:");
        scanf("%f", &s[i]. marks);

    }

    printf("\n----- Student Record -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("roll no : %d\n", s[i].roll);
        printf("Marks  : %.2f\n", s[i].marks);
    }
     
    return 0;
}
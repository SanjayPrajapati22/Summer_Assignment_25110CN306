#include<stdio.h>

struct Student
{



    int roll;
    char name[50];
    float m1, m2, m3;
    float total, percentage;
};

int main()

{
    struct Student s;

    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);



    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s.m1);

    

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    printf("\n===== STUDENT MARKSHEET =====\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.m1);
    printf("Subject 2   : %.2f\n", s.m2);
    printf("Subject 3   : %.2f\n", s.m3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if(s.percentage >= 40)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    return 0;
}
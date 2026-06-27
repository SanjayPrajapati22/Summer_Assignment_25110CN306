#include<stdio.h>


struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct Student s;

    printf("enter Roll Number:");
    scanf("%d", &s.roll);

    printf("enter Name:");
    scanf("%s", s.name);

    printf("enter marks:");

    scanf("%f", s.marks);

    printf("\n==== Student Record ====\n");
    printf("roll Number: %d\n ", s.roll );
    printf("name        :%s\n",s.name);
    printf("marks       :%2f\n", s.marks);

    return 0;

}

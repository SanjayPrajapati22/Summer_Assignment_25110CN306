#include<stdio.h>

struct Contact
{
  char name[50];
  char phone[15];
  char email[50];

};

int main(){

    struct Contact c;

    printf("enter name :");
    scanf("%s", c.name);

    printf("enter phone number:");
    scanf("%s", c.phone);

    printf("enter email :");
    scanf("%s", c.email);



    printf("\n===== Contact Detials =====\n");
    printf("Name          :%s\n",c.name);
    printf("phone number    :%s\n", c.email);
    printf("Email      : %s\n", c.email);



    return 0;
}
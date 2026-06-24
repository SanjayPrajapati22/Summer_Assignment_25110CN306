#include<stdio.h>
#include<string.h>
int main(){

    char str1[100], str2[100], temp[200];
    printf("enter first string:");
    scanf("%s", str1);

    printf("enter second string:");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("strings are not rotations");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
    printf("strings are rotations");

    else

      printf("strings are not rotations");

      return 0;
}

#include<stdio.h>
int main(){
    char str[100];

    int i = 0, length = 0;

    printf("enter a string:");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("length of string = %d", length);

    return 0;

}
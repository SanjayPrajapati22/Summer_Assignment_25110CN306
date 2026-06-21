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
    printf("reverse string = ");
    for(i = length - 1; i >= 0; i-- )
    {
        printf("%c",str[i]);
    }

    return 0;

}
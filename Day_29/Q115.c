#include<stdio.h>

int main(){

    char str[100];

    int i, length = 0 ,choice;

    printf("enter a string");
    scanf("%s", str);


    printf("\n===== -Menu =====\n");
    printf("1. Display String\n");
    printf("2. Find Length\n");
    printf("3. Reverse String\n");
    printf("4. Convert to uppercase\n");

    printf("enter your choice");
    scanf("%d", &choice);

    switch(choice)
         {
           case 1:
              printf("string = %s",str);
              break;
              
           case 2:
              while(str[length]!= '\0')
              {
                length++;
              }
              printf("Length = %d", length);
            break;

        case 3:
            while(str[length] != '\0')
            {
                length++;
            }

            printf("Reverse String = ");

            for(i = length - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
            break;

        case 4:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase String = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
         
}

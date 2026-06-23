#include<stdio.h>
int main(){
    char str[100], maxChar;
    int i, j, count, maxCount = 0;

    printf("enter a string: ");
    scanf("%s", str);

    for(i = 0; str[j] != '\0'; i++)
    {
        count = 0;
        for(j = 0; str[j]!= '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];

        }
    }
    printf("maximum occuring character = %c", maxChar);
    printf("\nfrequency = %d", maxCount);

    return 0;
}

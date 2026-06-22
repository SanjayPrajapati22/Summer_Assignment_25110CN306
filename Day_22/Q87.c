 #include<stdio.h>
 int main(){
    char str[100], ch;
    int i, count = 0;

    printf("enter a string: ");
    scanf("%s",str);

    getchar();
    

    printf("enter character to fingd frequency:");
    scanf(" %c", &ch);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }
    printf("frequency of %c = %d", ch, count);

    return 0;
 }
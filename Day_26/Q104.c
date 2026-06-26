#include<stdio.h>
int main(){
    int answer, score = 0;

    printf("====Quiz Application====\n\n");

    printf("Q1. What is the capital of india\n");
    printf("1. Mumbai\n2. Delhi\n3. kolkata\n4.chenni\n");
    printf("enter your answer:");
    scanf("%d", &answer);

    if(answer == 2)
    {
      score++;   
    }
    printf("\nQ3. How many days are thdere in a weel?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("enter your answer:");
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++;
    }
    printf("\n===== Quiz Result =====\n");
    printf("Your score = %d/n3\n", score);

    return 0;
}
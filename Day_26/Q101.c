#include<stdio.h>

int main(){

    int secret = 7, guess;
    
    printf("== number guessing game ===\n");
    printf("Guess a number between 1 and 10\n");

    do
    {
    printf("enter your guess:");
    scanf("%d",&guess);

    if(guess > secret)
    {
    printf("Too High! Try Again.\n");
    }
    else if(guess < secret){
        printf("Too Low! Try Again.\n");

    }   
    else{
        printf("Congratulations! you guessed the correct number.\n");

    }

    } while(guess != secret);
    return 0;
}
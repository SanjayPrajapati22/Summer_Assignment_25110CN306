#include<stdio.h>
int checkPrime(int n){

    if(n <= 1)
    return 0;

    for(int i =2; i<= n/2; i++)
    {
        if(n%i ==0)
    return  0;

    }
    return 1;
}
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    if(checkPrime(num))
    printf("%d is prime number",num);
    else 
    printf("%d is not prime number",num);

    return 0;
}
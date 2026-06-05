#include<stdio.h>
int main(){
    long long num, i, largest = -1;

    printf("enter the number");
    scanf("%lld",&num);


    while (num%2==0){
        largest = 2;
        num=num / 2;
    }
    
    for(i = 3; i * i <= num ; i= i+2)
    {
     while (num % i == 0){
        largest = i;
        num = num / i;

     }
    }
    if ( num > 2)
    largest = num;

    printf("largest prime factor = %lld", largest);

    return 0;
    
}

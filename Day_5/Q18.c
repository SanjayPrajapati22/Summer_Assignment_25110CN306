#include<stdio.h>
int main(){

    int num , temp, rem, count , fact , sum = 0;

    printf("enter the number");
    scanf("%d", &num);

    temp = num;
    
    while (num){
        rem = num  %10;
        count = 1;
        fact = 1;

        while (count <= rem){
         fact = fact * count;
         count ++;
        }
        printf("factroil of %d ", rem, fact);

        sum = sum + fact;
        num = num / 10;
        
    }
    if(temp == sum){
        printf("%d is a strong number",temp);

    }
    else {
        printf("%d is a not strong number",temp);
    }
    return 0;

}
#include<stdio.h>
int main(){
     int num, count, sum =0;

     printf("enter the number:");
     scanf("%d",&num);
     
     printf("factor of %d are",num);
     for(count= 1 ; count <num; count ++){
        if(num % count == 0){
            sum = sum +count;
        }
     }
     if (sum == num)
     printf("%d is a perfect number ", num);
     else
     printf("%d is not a perfect number", num);
     return 0;

}

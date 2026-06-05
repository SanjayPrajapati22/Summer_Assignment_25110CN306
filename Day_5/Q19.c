#include<stdio.h>
int main(){

    int num, count;

    printf("enter the number");

    scanf("%d",&num);



    printf("factor of %d are",num);
    for(count = 1; count <= num; count++){

    if(num %count == 0)
    printf("%d",count);

    }
    return 0;
    
}
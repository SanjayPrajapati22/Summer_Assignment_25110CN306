#include<stdio.h>
int sum(int , int);

int main(){
    int a,b, result;

    printf("enter two number");
    scanf("%d %d",&a,&b);
    result = sum(a,b);
    printf("the sum of two number is = %d",result);
    return 0;
}
int sum(int x, int y)
{
    int z;
    z= x+y;
    return (z);
}

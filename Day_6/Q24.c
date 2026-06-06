#include<stdio.h>
int main(){
    int x, num;
    long long result = 1;

    printf("enter base (x):");
    scanf("%d",&x);

    printf("enter exponent (n)");
    scanf("%d" , &num);
    for(int i = 1; i<=num; i++){
        result*= x;
    }

    printf("%d^%d = %lld",x , num , result);
    return 0;
}
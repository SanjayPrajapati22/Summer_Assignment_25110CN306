#include<stdio.h>
int Armstrong(int n);

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);



    Armstrong (n);
    return 0;
}
int Armstrong(int n){
    int x,d,sum  =0;
    x=n;
    while(n>0)
    {
        d= n% 10;
        sum = sum +d*d*d;
        n = n/ 10;
    }
    if(sum == x)
     printf("Armstrong");

     else
     printf("not Armstrong");
}
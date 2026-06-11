#include<stdio.h>
int max (int , int);
int main(){
    int a, b, big;
    printf("enter two number");
    scanf("%d%d",&a,&b);

    big = max(a,b);
    printf("the biggest number = %d",big);
    return 0;
}
int max(int x, int y){
    if(x>y)
    return(x);
    else
    return (y);
}
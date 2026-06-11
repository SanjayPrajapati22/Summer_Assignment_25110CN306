#include<stdio.h>
int factoril(int);
int main(){
    int n, fact;

    printf("enter the number");
    scanf("%d",&n);

    if(n<0)
    {
        printf("factoril of negative number is not defined");

    }
    else{
        fact = factoril(n);
        printf("the factorial=%d",fact);
    }
    return 0;
}
int factoril (int n){
    int i, f=1;

    for(i=1; i<= n; i++){

        f= f*i;
    }
    return(f);
}
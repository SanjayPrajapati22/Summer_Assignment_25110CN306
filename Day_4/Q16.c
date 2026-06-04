#include<stdio.h>
int main(){

    int n, arm, i, r, c, a, b;
    printf("enter two number :");
    scanf("%d %d",&a , &b);

    for(i=a; i<=b;i++){
       
        n=i;
        c=n;
        arm=0;
    while(n>0)
    {
       r= n%10;
       arm= (r*r*r) + arm;
       n=n/10;

    
}
    if(c==arm){
        printf("%d ", c);
    }
}
    return 0;
}
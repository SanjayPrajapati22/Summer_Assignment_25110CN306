#include<stdio.h>
int gcd (int n1,int n2);
int main(){
    int n1, n2;
    printf("enter two number");
    scanf("%d %d",&n1,&n2);
    gcd(n1,n2);

    return 0;

}
 int gcd (int n1, int n2)
{
    int i , gcd = 1;
    for(i=1; i<=n1 && n2; i++){
    
    if (n1%i==0 && n2%i == 0){
    gcd = i;
    }
}
    
    printf("G.C.D of %d and %d is %d", n1 ,n2 , gcd);
 return 0;

}
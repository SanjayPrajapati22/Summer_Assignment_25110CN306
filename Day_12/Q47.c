#include<stdio.h>
int fabonacci(int n){
    int a= 0, b=1, c;

    for(int i= 1; i < n; i++ ){
        printf("%d",a);
        c= a + b;
        a= b;
        b= c;
    }
    return a;

}
int main(){
    int n;

    printf("enter number of terms");
    scanf("%d",&n);

    printf("fabonacci seires");
    printf("%d",fabonacci(n));

    return 0;

}
#include<stdio.h>
int main(){
    
    int arr[100], n, i;
    int sum = 0, total , missing;

    printf("enter value of n:");
    scanf("%d",&n);

    printf("enter %d elements: \n", n-1);

    for(i= 0; i < n-1; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1)/2;

    missing = total - sum ;

    printf("missing number =%d", missing);

    return 0;
}
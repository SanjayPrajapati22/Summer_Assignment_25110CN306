#include<stdio.h>
int main(){

    int arr[100], n, i;

    printf("enter number of elements");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reversed array :");

    for(i = n-1; i >= 0; i--)
    {
        printf("%d ",  arr[i]);
    }
    return 0;
}
    
     


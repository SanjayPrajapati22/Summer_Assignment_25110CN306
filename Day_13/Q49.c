#include<stdio.h>

int main(){
    int arr[100], n, i;

    printf("enter numnber of elements");
    scanf("%d",&n);

    printf("enter array elements");

    for(i= 0; i< n; i++){

        scanf("%d",&arr[i]);
    }

    printf("array  elements are :");
    
    for(i = 0; i< n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
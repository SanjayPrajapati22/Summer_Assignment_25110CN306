#include<stdio.h>
int main(){
    int arr[100], n, i, temp;

    printf("enter number of elements");
    scanf("%d",&n);

    printf("enter array elements");

    for(i= 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    temp = arr[0];

    for(i = 0; i< n-1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;
    
    printf("array after left rotation");

    for(i= 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
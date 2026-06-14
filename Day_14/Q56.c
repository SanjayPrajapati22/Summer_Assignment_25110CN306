#include<stdio.h>
int main(){
    int arr[100], n, i ,j;

    printf("enter numbrr of elements");
    scanf("%d",&n);

    printf("enter array elements");


    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j< n; j++){
            if(arr[i]== arr[j])
            {
                printf("%d",arr[i]);
                break;

            }
        

        }
    }
    return 0;

}
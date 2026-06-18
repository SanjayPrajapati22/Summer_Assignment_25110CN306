#include<stdio.h>
int main(){
    int arr[100], n, x, i ,flag= 0;
    int low, high , mid;

    printf("enter no of elements");
    scanf("%d", &n);

    printf("enter array elements");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements to search");
    scanf("%d",&x);

    low = 0;
    high = n-1;
    while(low<= high)
    {
        mid = (low+high)/2;

        if(arr[mid]== x)
        {
            flag = 1;
            break;
        }
        else if(arr[mid]>x)
        high = mid-1;

        else 
            low = mid+1;
    }
    if(flag == 1){

       printf("elements present at %d",mid +1);
    }

    else{
           printf("unsucessfull search");

           return 0;
    }

    
}


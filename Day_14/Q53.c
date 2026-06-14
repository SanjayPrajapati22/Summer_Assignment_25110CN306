#include<stdio.h>
int main(){
    int arr[100], n,i ,x, flag = 0;
    printf("enter no of elements");
    scanf("%d",&n);

    printf("enter array elements");

    for(i =  0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("enter element to search");
    scanf("%d",&x);

    for(i = 0; i < n; i++){
        if(arr[i] == x){

            flag = 1;
            break;
        }
    }
    if(flag)
     printf("element flag at position %d", i + 1);

     else
        printf("element not flag");

        return 0;

}
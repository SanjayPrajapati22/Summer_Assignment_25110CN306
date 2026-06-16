#include<stdio.h>
int main(){
     

  int arr[100], n, i, j , sum;
  printf("enter number of elements:");
  scanf("%d",&n);


 printf("enter array elements");

 for(i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }

 printf("enter reqired sum:");
 scanf("%d",&sum);


 printf("pairs are :\n");

 for(i = 0; i < n; i++)
 {
    for(j = i + 1; j < n ; j++){
        if(arr[i] + arr[j] == sum)
        {
            printf("(%d,%d)\n", arr[i], arr[j]);


        }
    }
 }
  return 0;





}


 

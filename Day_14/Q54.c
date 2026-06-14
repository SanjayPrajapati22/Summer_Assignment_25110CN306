#include<stdio.h>
  int main(){
    int arr[100],n, i, x;
    int count = 0;


   printf("enter number of elements");
   scanf("%d",&n);

   printf("enter array elements");
   
   for(i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }

   printf("enter elements to find frequency");
   scanf("%d",&x);

   for(i = 0; i < n; i++)
{
    if(arr[i] == x)
    {
        count++;
    }
} 
  printf("frequency of %d = %d",x, count);
  
  return 0;
}
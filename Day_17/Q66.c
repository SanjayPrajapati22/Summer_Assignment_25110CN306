#include<stdio.h>
int main(){
    int arr1[100], arr2[100];

    int n1, n2, i , j, flag = 0;
    
    printf("enter size of first array");
    scanf("%d",&n1);

    printf("enter elements of first array:");
    for(i= 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);

    }
    printf("enter size of second array:");
    scanf("%d",&n2);

    printf("enter elements of second  array");
    for(i = 0; i < n2; i++)
    {
     scanf("%d", &arr2[i]);
    }

    printf("union of arrays:\n");

    for(i = 0; i < n1; i++)
    {
     printf("%d ", arr1[i]);
    }

    for(i = 0; i < n2; i++)
    {
        flag = 0;

        for(j =  0; j < n1; j++)
        {
            if(arr2[i] == arr1[j]){     
        
        flag = 1;
        break;

    }
   }

   if(flag == 0)
   {
    printf("%d ", arr2[i]);
   }
  }

  return 0;
}
    
     
    



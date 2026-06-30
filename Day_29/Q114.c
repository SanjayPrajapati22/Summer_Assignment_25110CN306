#include<stdio.h>


int main(){

    int a[100], n, i, choice;
    int sum = 0, Max, Min;

    printf("enter number elements:");
    scanf("%d", &n);


     printf("enter array of elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n====== MENU ======\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum\n");
    printf("4. Find Minimum");


    printf("enter your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: 
        printf("Array Elements: ");
        for(i = 0; i < n; i++)
        {
            printf("%d",a[i]);

        }
        break;
        case 2:
        for(i = 0; i < n; i++)
        {
            sum = sum +a[i];

        }
        printf("sum = %d", sum);
        break;

        case 3:

           Max = a[0];
           for(i = 1; i< n; i++)
           {
            if(a[i]> Max)
            Max = a[i];

           }
           printf("Maximum  Elements = %d", Max);
           break;

           case 4:
             Min = a[0];
             for(i = 1; i < n; i++)
             {
                if(a[i] < Min)
                Min =a[i];
             }
             printf("Maximum Elements = %d ", Min);
             break;

             default :
             printf("invalid choice  ");


    }
    return 0;


}
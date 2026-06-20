#include<stdio.h>
int main(){

    int a[10][10],m,n,i,j,sum;

    printf("enter rows and columns");
    scanf("%d%d",&m,&n);

    printf("enter matrix elements");

    for(i= 0; i < m; i++)
    {
        for(j= 0; j < n ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        sum = 0;

        for(j = 0; j < n; j++)
        {
            sum = sum +a[i][j];

        }

        printf("sum of row %d = %d", i + 1, sum);


    }
    return 0;
}
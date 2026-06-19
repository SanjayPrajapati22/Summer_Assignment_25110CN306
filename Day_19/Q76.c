#include<stdio.h>
int main(){
    int a[10][10],m,n,i,j,s1=0,s2=0;
    printf("enter matrix dimension");
    scanf("%d%d",&m,&n);
    if(m==n){
        printf("enter the matrix");

        for(i = 0; i < m; i++)
        {
         for(j = 0; j < n; j++)
         {
            scanf("%d",&a[i][j]);
         }
        }
    
    for(i =0; i < m; i++)
    {
        s1= s1+a[i][i];
        s2= s2+a[i][m-1-i];

    }
    printf("the sum of main diagonal elements = %d",s1);

    printf("the sum of diagonal elements = %d",s2);
    }
    else {
        printf("connet grenerate sum of diagonal");
    }
    return 0;
}


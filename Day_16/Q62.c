#include<stdio.h>
int main(){
    int arr[100], n, i, j;
    int maxfreq = 0, elements;

    printf("enter number of elements");
    scanf("%d",&n);

    printf("enter array elements:");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count= 1;

        for(j = i+1 ; j < n ; j++){
            
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > maxfreq){

            maxfreq = count;
            elements = arr[i];

    }
    printf("maximun frequency element = %d\n", elements);
    printf("frequency = %d",maxfreq);



    return 0;

}
}

#include<stdio.h>
int countSetBits(int n){
    int count =0;

    while(n > 0){
        count += n & 1;
        n >>= 1;


    }
    return count;
}
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);


    printf("number of set bits = %d",countSetBits(num));

    return 0;

}
#include<stdio.h>



struct Inventory
{
   int itemid;
   char itemname[50];
   int quantity;
   float price;
};
int main()
{
    struct Inventory i;

    
    
    printf("Enter Item ID: ");
    scanf("%d", &i.itemid);

    printf("Enter Item Name: ");

    scanf("%s", i.itemname);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    
    
        printf("Enter Price: ");
        scanf("%f", &i.price);

        printf("\n===== Inventory Record =====\n");

        printf("Item ID     : %d\n", i.itemid);

         printf("Item Name   : %s\n", i.itemname);

         printf("Quantity    : %d\n", i.quantity);

         printf("Price       : %.2f\n", i.price);

    return 0;
}
#include<stdio.h>


struct Book
{
   int id;
   char titlde[50];
   char author[50];

};

int main(){

    struct Book b[100];
    int n, i;

    printf("enter number of books:");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d\n", i+1);

        printf("Book id");
        scanf("%d", &b[i].id);


        printf("Book Title:");
        scanf("%s", b[i].author);
    
    }printf("\n----- Library Record -----\n");

    for(i = 0; i , n; i++)
    {
      
    printf("\nBook %d\n", i+1);
    printf("Book ID   :%d\n",b[i].id);
    printf("Book Title   :%s\n",b[i].titlde);
    printf("Author Name  :%s\n", b[i].author);
    }
    return 0;
}
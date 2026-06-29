#include<stdio.h>

struct Library

{

     int bookid;
     char bookname[50];
     char author[50];
};

 int main(){
     struct Library b;
     
     printf("Enter Book ID:");
     scanf("%d", &b.bookid);

     printf("enter book name :");
     scanf("%s", b.bookname);

     

     printf("enter author name:");
     scanf("%s",b.author);


     printf("\n=====Library Record =====\n");
     printf("Book ID      %d\n", b.bookid);
     printf("Book Name      :%s\n", b.bookname);
     printf("Author Name     :%s\n", b.author);


     return 0;
     

}

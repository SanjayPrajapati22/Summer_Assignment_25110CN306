#include<stdio.h>

int main(){

    int choice;
    float a, b;




printf("===== MENU DRIVEN CALUCATOR======\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplaction\n");
printf("4. Division\n");

printf("enter your choice:");
scanf("%d", &choice);

printf("enter two number :");
scanf("%f %f", &a,&b);

switch(choice)
{
    case 1:
        printf("Addition = %.2f", a+b);
        break;
    
    case 2:
        printf("Subtraction = %.2f", a-b);
        break;
    
    case 3:
        printf("Multiplaction = %.2f", a*b);
        break;
    
    case 4:
        if(b != 0)
            printf("Division = %.2f",a/b);
        else 
          printf("Division by zero is not possible.");
            break;

        default:
            printf("invalid choice");



    
}
  return 0;
}

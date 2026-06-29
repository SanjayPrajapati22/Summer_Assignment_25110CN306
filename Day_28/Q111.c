#include<stdio.h>


struct ticket
{
  int ticketNo;
  char passengerName[50];
  char destination[50];
  float fare;

};

int main(){

    struct ticket t;

    printf("enter ticket number:");
    scanf("%d",&t.ticketNo);

    printf("enter passenger name:");
    scanf("%s", t.passengerName);

    printf("enter destination:");
    scanf("%s", t.destination);

    printf("enter ticket fare:");
    scanf("%f", &t.fare);



    printf("\n===== Ticket Booking Details=====\n");
    printf("ticket number     :%s\n",t.passengerName);
    printf("Passenger Name    :%s\n", t.passengerName);
    printf("destination      :%s\n", t.destination);
    printf("ticket fare       : %.2f\n", t.fare);

    return 0;



}
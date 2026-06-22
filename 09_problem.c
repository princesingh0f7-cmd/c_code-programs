#include <stdio.h>

int main(){
float principal_amount,time,rate;
printf("ENTER YOUR PRINCIPAL AMOUNT:");
scanf("%f",&principal_amount);
printf("ENTER YOUR TIME:");
scanf("%f",&time);
printf("ENTER YOUR RATE:");
scanf("%f",&rate);
float simple_interest=(principal_amount*time*rate)/100;
printf("Interest Amount:Rs%f",simple_interest);
printf("\nTotal Amount:Rs%f",principal_amount+simple_interest);
    return 0;
}
#include <stdio.h>
#include <math.h>
// compound interest
// formula p*(1+r/100)^t
int main(){
float principal_amount,time,rate;
printf("ENTER YOUR PRINCIPAL AMOUNT:");
scanf("%f",&principal_amount);
printf("ENTER YOUR TIME:");
scanf("%f",&time);
printf("ENTER YOUR RATE:");
scanf("%f",&rate);
float total_amount=principal_amount*(pow((1+rate/100),time));
float interest_amount=total_amount-principal_amount;
printf("........*/Result/*.........");
printf("\nInterest Amount:Rs%f",interest_amount);
printf("\nTotal Amount:Rs%f",total_amount);
    return 0;
}
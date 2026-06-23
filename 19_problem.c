#include <stdio.h>

int main(){
float first,second;
printf("ENTER YOUR FIRST NUMBER:");
scanf("%f",&first);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%f",&second);
char airth;
printf("ENTER YOUR AIRTHMATIC OPERATOR (+,-,*,/):");
scanf(" %c",&airth);
float result;
switch (airth)
{
case '+': result=first+second;
    printf("RESULT = %.2f",result);
    break;
case '-': result=first-second;
    printf("RESULT = %.2f",result);
    break;
case '*': result=first*second;
    printf("RESULT = %.2f",result);
    break;
case '/': result=first/second;
    if (second != 0)
                printf("RESULT = %.2f", first / second);
            else
                printf("Division by zero is not allowed.");
            break;

    break;
default:
            printf("\n invalid operator");
    break;
}
    return 0;
}
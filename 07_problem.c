#include <stdio.h>

int main(){
int first,second,swap;
printf("ENTER YOUR FIRST NUMBER:");
scanf("%d",&first);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%d",&second);
//swapping
swap=first;
first=second;
second=swap;
printf("The Value of First Number %d and the value of Second Number %d",first,second);
    return 0;
}
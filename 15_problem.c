#include <stdio.h>
// leap year divide by 400 or 4 is leap year divide by 100 is not 
int main(){
int year;
printf("ENTER YOUR YEAR (YYYY):");
scanf("%d",&year);
if (year%400==0 || (year%4==0 && year%100 != 0)){
    printf("It's a Leap Year");
}
else{
    printf("It's a Not Leap Year");
}
    return 0;
}
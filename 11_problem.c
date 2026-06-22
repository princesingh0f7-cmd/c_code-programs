#include <stdio.h>
// temperature conversion
int main(){
int temp;
printf("ENTER YOUR TEMPERATURE IN CELSIUS:");
scanf("%d",&temp);
float kelvin=temp+273.15;
float fehen=(temp*9/5)+32;
printf("TEMPERATURE IN kELVIN:%f K",kelvin);
printf("\nTEMPERATURE IN FAHRENHEIT:%f F",fehen);
    return 0;
}
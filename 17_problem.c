#include <stdio.h>
// terniary operator minimum order
int main(){
int first,second;
printf("ENTER YOUR FIRST NUMBER:");
scanf("%d",&first);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%d",&second);
int min=first<second ? first:second;
printf("MINIMUM NUMBER IS %d",min);
    return 0;
}
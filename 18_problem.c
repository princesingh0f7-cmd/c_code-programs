#include <stdio.h>
// absolute value using ternary operators
int main(){
int num;
printf("ENTER A NUMBER:");
scanf("%d",&num);
printf("%d is absolute value",(num>0 ? num:-num));
    return 0;
}
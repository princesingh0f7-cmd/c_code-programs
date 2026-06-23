#include <stdio.h>
// factorial
int main(){
int num;
printf("ENTER NUMBER:");
scanf("%d",&num);
int fact=1;
for(int i=1;i<=num;i ++){
fact=fact*i;
}
printf("sum= %d",fact);
    return 0;
}
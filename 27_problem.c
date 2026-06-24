#include <stdio.h>

int main(){
int n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
int orignal=n;
int rev=0;
for(;n>0;){ // kabtak loop chalna ha
rev=rev*10+n%10;
n=n/10;
}
printf("%d reverse number is %d",orignal,rev);
    return 0;
}
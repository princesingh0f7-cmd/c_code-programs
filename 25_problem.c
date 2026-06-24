#include <stdio.h>

int main(){
int first,second,hcf;
printf("ENTER FIRST NUMBER:");
scanf("%d",&first);
printf("ENTER SECOND NUMBER:");
scanf("%d",&second);
for(int hcf=first>second?second:first; ; hcf--){
    if(first%hcf==0 && second%hcf==0){
    printf("HCF %d and %d two number is %d",first,second,hcf);
    break;
    }
}
    return 0;
}